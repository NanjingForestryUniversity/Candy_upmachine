#include "camera.h"
#include <QDebug>
#include "thread.h"

void __stdcall onImageDataCallBackFunc(unsigned char * pData, MV_FRAME_OUT_INFO_EX* pFrameInfo, void* pUser);
void __stdcall onOfflineCallBackFunc(unsigned int nMsgType, void* pUser);

Camera::Camera()
{
    camera_handle = NULL;

    memset(&camera_param, 0, sizeof(camera_param));
    camera_param.exposure_time = 10000.00;
    camera_param.white_balance_ratio = 1000;
    camera_param.gain = 1.0;
    memset(&device_list, 0, sizeof(device_list));
}

uint32_t Camera::enum_device()
{
    int ret = MV_CC_EnumDevices(MV_GIGE_DEVICE | MV_USB_DEVICE, &device_list);
    if(ret != MV_OK)
    {
        return -1;
    }

    return device_list.nDeviceNum;
}


bool Camera::print_device_info()
{
    for(int i =0; i < device_list.nDeviceNum; i++)
    {
        MV_CC_DEVICE_INFO* device_info = device_list.pDeviceInfo[i];
        if(device_info == NULL)
        {
            qDebug()<<"device info:"<<i<<"can not get" ;
            continue;
        }

        if (device_info->nTLayerType == MV_GIGE_DEVICE)
        {
            int nIp1 = ((device_info->SpecialInfo.stGigEInfo.nCurrentIp & 0xff000000) >> 24);
            int nIp2 = ((device_info->SpecialInfo.stGigEInfo.nCurrentIp & 0x00ff0000) >> 16);
            int nIp3 = ((device_info->SpecialInfo.stGigEInfo.nCurrentIp & 0x0000ff00) >> 8);
            int nIp4 = (device_info->SpecialInfo.stGigEInfo.nCurrentIp & 0x000000ff);

            qDebug()<<"Device index" << i;
            qDebug()<<"Device Model Name: " << device_info->SpecialInfo.stGigEInfo.chModelName;
            qDebug()<<"CurrentIp: " << nIp1 << "." << nIp2 << "." << nIp3 << "." << nIp4;
            qDebug()<<"UserDefinedName: " << device_info->SpecialInfo.stGigEInfo.chUserDefinedName;

        }
        else if (device_info->nTLayerType == MV_USB_DEVICE)
        {
            qDebug()<<"Device Model Name:" << device_info->SpecialInfo.stUsb3VInfo.chModelName;
            qDebug()<<"UserDefinedName: " << device_info->SpecialInfo.stUsb3VInfo.chUserDefinedName;
        }
        else
        {
            qDebug()<<"Not support";
        }
    }

    return true;
}

bool Camera::select_device(int device_index)
{
    int ret = MV_CC_CreateHandle(&camera_handle, device_list.pDeviceInfo[device_index]);
    if(ret != MV_OK)
    {
        return false;
    }

    return true;
}


bool Camera::open_camera()
{
    int ret = MV_CC_OpenDevice(camera_handle);
    if(ret != MV_OK)
    {
        return false;
    }

    return true;
}


bool Camera::register_image_callback(imageCallbackFunc onImageDataCallBackFunc)
{
    int ret = MV_CC_RegisterImageCallBackForBGR(camera_handle, onImageDataCallBackFunc, NULL);
    if (MV_OK != ret)
    {
        return false;
    }
    return true;
}

bool Camera::register_offline_callback(exceptionCallbackFunc onOfflineCallBackFunc)
{
    int nRet = MV_CC_RegisterExceptionCallBack(camera_handle, onOfflineCallBackFunc, NULL);
    if (MV_OK != nRet)
    {
        return false;
    }
    return true;
}

bool Camera::start_capture()
{
    int ret = MV_CC_StartGrabbing(camera_handle);
    if (MV_OK != ret)
    {
        return false;
    }
    return true;
}

bool Camera::stop_capture()
{
    int ret = MV_CC_StopGrabbing(camera_handle);
    if (MV_OK != ret)
    {
        return false;
    }
    return true;
}


bool Camera::set_acquisition_mode()
{
    int ret = MV_CC_SetEnumValue(camera_handle, "TriggerMode", 1);
    if(MV_OK != ret)
    {
        return false;
    }

    ret = MV_CC_SetEnumValue(camera_handle, "TriggerSource", 2);
    if(MV_OK != ret)
    {
        return false;
    }

    ret = MV_CC_SetEnumValue(camera_handle, "TriggerActivation", 1);
    if(MV_OK != ret)
    {
        return false;
    }

    ret = MV_CC_SetEnumValue(camera_handle, "AcquisitionMode", 2);
    if(MV_OK != ret)
    {
        return false;
    }

    return true;
}


bool Camera::set_test_acquisition_mode()
{
    int ret = MV_CC_SetEnumValue(camera_handle, "TriggerMode", 0);
    if(MV_OK != ret)
    {
        return false;
    }

    ret = MV_CC_SetEnumValue(camera_handle, "AcquisitionMode", 2);
    if(MV_OK != ret)
    {
        return false;
    }

    return true;
}


bool Camera::set_ROI(int offset_x, int offset_y, int width, int height)
{
    roi_offset_x = offset_x;
    roi_offset_y = offset_y;
    roi_width = width;
    roi_height = height;

    int ret = MV_CC_SetIntValue(camera_handle, "OffsetX", 0);
    if(MV_OK != ret)
    {
        return false;
    }

    ret = MV_CC_SetIntValue(camera_handle, "OffsetY", 0);
    if(MV_OK != ret)
    {
        return false;
    }


    ret = MV_CC_SetIntValue(camera_handle, "Width", roi_width);
    if(MV_OK != ret)
    {
        return false;
    }

    ret = MV_CC_SetIntValue(camera_handle, "Height", roi_height);
    if(MV_OK != ret)
    {
        return false;
    }

    ret = MV_CC_SetIntValue(camera_handle, "OffsetX", roi_offset_x);
    if(MV_OK != ret)
    {
        return false;
    }

    ret = MV_CC_SetIntValue(camera_handle, "OffsetY", roi_offset_y);
    if(MV_OK != ret)
    {
        return false;
    }

    return true;
}





bool Camera::close_camera()
{
    int ret = MV_CC_CloseDevice(camera_handle);
    if (MV_OK != ret)
    {
        return false;
    }

    return true;
}

bool Camera::destroy_handle()
{
    int ret = MV_CC_DestroyHandle(camera_handle);
    if (MV_OK != ret)
    {
        return false;
    }

    return true;
}


bool Camera::import_config_file()
{
    int ret = MV_CC_FeatureLoad(camera_handle, CAMERA_CONFIG_PATH);
    if(ret != MV_OK)
    {
        return false;
    }
    return true;
}


bool Camera::save_config_file()
{
    int ret = MV_CC_FeatureSave(camera_handle, CAMERA_CONFIG_PATH);
    if(ret != MV_OK)
    {
        return false;
    }
    return true;
}


bool Camera::set_param(Camera_param param_struct)
{
    camera_param = param_struct;
    int ret = MV_CC_SetIntValue(camera_handle, "BalanceRatio", camera_param.white_balance_ratio);
    if (ret != MV_OK)
    {
        qDebug()<<"white balance ration set failed";
        return false;
    }

    ret = MV_CC_SetFloatValue(camera_handle, "ExposureTime", camera_param.exposure_time);
    if(ret != MV_OK)
    {
        qDebug()<<"exposure time set failed";
        return false;
    }

    ret = MV_CC_SetFloatValue(camera_handle, "Gain", camera_param.gain);
    if(ret != MV_OK)
    {
        qDebug()<<"gain set failed";
        return false;
    }

    return true;
}


Camera_param Camera::get_param()
{
    MVCC_INTVALUE BalanceRatio = {0};
    int ret = MV_CC_GetIntValue(camera_handle, "BalanceRatio", &BalanceRatio);
    if (ret == MV_OK)
    {
        camera_param.white_balance_ratio = BalanceRatio.nCurValue;
    }
    else
    {
        qDebug()<<"get white balance ratio failed";
    }


    MVCC_FLOATVALUE ExposureTime = {0};
    ret = MV_CC_GetFloatValue(camera_handle, "ExposureTime", &ExposureTime);
    if(ret == MV_OK)
    {
        camera_param.exposure_time = ExposureTime.fCurValue;
    }
    else
    {
        qDebug()<<"get exposure time failed";
    }

    MVCC_FLOATVALUE Gain = {0};
    ret = MV_CC_GetFloatValue(camera_handle, "Gain", &Gain);
    if(ret == MV_OK)
    {
        camera_param.gain = Gain.fCurValue;
    }
    else
    {
        qDebug()<<"get gain failed";
    }

#if 1
    qDebug()<< camera_param.white_balance_ratio;
    qDebug()<<camera_param.exposure_time;
    qDebug()<<camera_param.gain;

#endif

    return camera_param;
}



bool Camera::init_camera()
{
    int device_num = enum_device();
    if(device_num == -1)
    {
        qDebug()<<"enum device failed";
        if(camera_handle != NULL)
        {
            destroy_handle();
        }
        return false;
    }
    if(device_num == 0)
    {
        qDebug()<<"no camera found";
        if(camera_handle != NULL)
        {
            destroy_handle();
        }
        return false;
    }

    //print_device_info();
    bool isOk = select_device(0);
    if(!isOk)
    {
        qDebug()<<"create handle failed";
        if(camera_handle != NULL)
        {
            destroy_handle();
        }
        return false;
    }

    isOk = open_camera();
    if(!isOk)
    {
        qDebug()<<"open camera failed";
        if(camera_handle != NULL)
        {
            destroy_handle();
        }
        return false;
    }

    //set_ROI(0, 0, 2448, 2048);

    isOk = import_config_file();
    //set_ROI(0, 668, 1000, 2448);
    if(!isOk)
    {
        qDebug()<<"import config file failed";
        if(camera_handle != NULL)
        {
            destroy_handle();
        }
        return false;;
    }

    isOk = register_image_callback(onImageDataCallBackFunc);
    if(!isOk)
    {
        qDebug()<<"register image callback function failed";
        if(camera_handle != NULL)
        {
            destroy_handle();
        }
        return false;
    }

    isOk = register_offline_callback(onOfflineCallBackFunc);
    if(!isOk)
    {
        qDebug()<<"register offline callback function failed";
        if(camera_handle != NULL)
        {
            destroy_handle();
        }
        return false;
    }
    isOk = set_acquisition_mode();
    if(!isOk)
    {
        qDebug()<<"set acquistion mode failed";
        if(camera_handle != NULL)
        {
            destroy_handle();
        }
        return false;
    }

    //isOk = set_ROI(0, 668, 2448, 1000);
//    if(!isOk)
//    {
//        qDebug()<<"SET ROI FAILED";
//        if(camera_handle != NULL)
//        {
//            destroy_handle();
//        }
//        return false;
//    }


    MV_CC_SetBalanceWhiteAuto(camera_handle, 0);
    MV_CC_SetIntValue(camera_handle, "LineDebouncerTime", 100);
    return true;
}


bool Camera::fini_camera()
{
    close_camera();
    destroy_handle();
}
