#ifndef CAMERA_H
#define CAMERA_H

#include "MvCameraControl.h"

typedef void(*imageCallbackFunc)(unsigned char * , MV_FRAME_OUT_INFO_EX* , void* );
typedef void(*exceptionCallbackFunc)(unsigned int , void* );


struct Camera_param       //相机参数在此添加，在构造函数中给出默认值，设置参数需要刷新
{
    float exposure_time;
    float gain;
    int white_balance_ratio;
    //... other params
};

class Camera
{
private:
    void* camera_handle;
    MV_CC_DEVICE_INFO_LIST device_list;
    const char* config_file_path;
    Camera_param camera_param;
    int roi_width;
    int roi_height;
    int roi_offset_x;
    int roi_offset_y;

public:
    Camera();

    uint32_t enum_device();
    bool print_device_info();
    bool select_device(int device_index);
    bool open_camera();
    bool start_capture();
    bool close_camera();
    bool set_acquisition_mode();
    bool set_test_acquisition_mode();
    bool set_ROI(int offset_x, int offset_y, int width, int height);
    bool stop_capture();
    bool register_image_callback(imageCallbackFunc onImageDataCallBackFunc);
    bool register_offline_callback(exceptionCallbackFunc onOfflineCallBackFunc);
    bool destroy_handle();
    bool import_config_file();
    bool save_config_file();
    bool set_param(Camera_param value);
    Camera_param get_param();

    bool init_camera();
    bool fini_camera();
};

#endif // CAMERA_H
