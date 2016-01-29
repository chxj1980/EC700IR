// 该文件编码格式必须是WIN936
//    SWNetOpt.h
//

#ifndef _SW_NET_RENDER_OPT_H_
#define _SW_NET_RENDER_OPT_H_

#if todo
#include "CameraController.h"
#endif


#define PROTOCOL_MERCURY	1 //Note: should keep align with SDK


// 连接状态
typedef enum
{
    E_NETFAIL = -1
}
NET_ERROR;

// 相机数据类型
typedef enum
{
    CAMERA_THROB = 0xFFFF0001
    , CAMERA_THROB_RESPONSE = 0xFFFF0002
    , CAMERA_IMAGE = 0xF0000001
    , CAMERA_VIDEO = 0xF0000002
    , CAMERA_RECORD = 0xF0010001
    , CAMERA_STRING = 0xF0010002
    , CAMERA_STATE = 0xF0020001	//这个目前没用，就用来做状态信息发送吧,黄国超备注,2011-11-07
    , CAMERA_HISTORY_BEGIN = 0xF0030001
    , CAMERA_HISTORY_END = 0xF0030002
    , CAMERA_TFD_STRING = 0XF0030003
}
CAMERA_INFO_TYPE;

// 相机命令集
typedef enum
{
    CAMERA_UNKNOW_CMD = 0xFFFF0000
    , CAMERA_GET_PARAM_CMD = 0x000F0001
    , CAMERA_SET_PARAM_CMD = 0x000F0002
    , CAMERA_SET_EXPOSURE_CMD = 0x000F0003
    , CAMERA_SET_GAIN_CMD = 0x000F0004
    , CAMERA_SET_AGCLIMIT_CMD = 0x000F0005
    , CAMERA_GET_TIME_CMD = 0x000F0006
    , CAMERA_SET_TIME_CMD = 0x000F0007
    , CAMERA_SET_RGB_GAIN_CMD = 0x000F0008
    , CAMERA_SET_ENCODE_MODE_CMD = 0x000F0009
    , CAMERA_SET_FPS_MODE_CMD = 0x000F0010
    , CAMERA_SOFT_TRIGGER_CAPTURE_CMD = 0x000F0011
    , CAMERA_SET_RAW_SHUTTER_CMD = 0x000F0012
    , CAMERA_SET_REG_CMD = 0x000F1000
    , CAMERA_GET_STATE_CMD = 0x000F2001
    , CAMERA_SET_STATE_CMD = 0x000F2002
    , CAMERA_DEBUG_SET_SOME_VALUE_CMD = 0x000F3000
    , CAMERA_XML_EXT_CMD = 0x000F4000
    , CAMERA_RESET_DEVICE_CMD = 0x000F5000
    , CAMERA_GET_RESET_REPORT_CMD = 0x000F5001
    , CAMERA_NETCOM_CMD = 0x000F6000
    , CAMERA_GET_DEBUG_INFO_CMD = 0x000F7000
    , CAMERA_UPDATE_CONTROLL_PANNEL = 0x000F8000
    , CAMERA_PROTOCOL_COMMAND = 0x000F9000
	, CAMERA_SET_CHARACTER = 0x000FA000
    , CAMERA_GET_DOME_PARAM_CMD = 0x000FB001
    , CAMERA_SET_DOME_PARAM_CMD = 0x000FB002
    , CAMERA_SET_TRANSPARENT_SERIAL_CMD = 0x000FC000
    , CAMERA_GET_HDD_REPORT_LOG = 0x000FF000
}
CAMERA_COMMAND_TYPE;

// 信息ID集
typedef enum
{
    BLOCK_IMAGE_TYPE = 0xFF000001
    , BLOCK_IMAGE_WIDTH = 0xFF000002
    , BLOCK_IMAGE_HEIGHT = 0xFF000003
    , BLOCK_IMAGE_TIME = 0xFF000004
    , BLOCK_IMAGE_EXT_INFO = 0xFF000005
    , BLOCK_IMAGE_JPEG_CR = 0xFF000006
    , BLOCK_IMAGE_Y = 0xFF000007
    , BLOCK_VIDEO_TYPE = 0xFF001001
    , BLOCK_FRAME_TYPE = 0xFF001002
    , BLOCK_VIDEO_TIME = 0xFF001003
    , BLOCK_IMAGE_OFFSET = 0xFF001004
    , BLOCK_VIDEO_EXT_INFO = 0xFF001005
    , BLOCK_VIDEO_Y = 0xFF001006
    , BLOCK_VIDEO_WIDTH = 0xFF001007
    , BLOCK_VIDEO_HEIGHT = 0xFF001008
    , BLOCK_VIDEO_OUTPUT_FR = 0xFF001009
    , BLOCK_XML_TYPE = 0xFF002001
    , BLOCK_RECORD_TYPE = 0xFF002002
    , BLOCK_FPGA_EXT_INFO = 0xFF003001
}
CAMERA_BLOCK_NAME;

// BLOCK_IMAGE_EXT_INFO
typedef struct tagImageExtInfo
{
    INT iShutter;
    INT iGain;
    INT iGainR;
    INT iGainG;
    INT iGainB;
} ImageExtInfo;

// BLOCK_VIDEO_EXT_INFO
typedef struct tagVideoExtInfo
{
    INT iShutter;
    INT iGain;
    INT iGainR;
    INT iGainG;
    INT iGainB;
    DWORD  dwFrameID;
} VideoExtInfo;

//BLOCK_VIDEO_WIDTH
typedef struct tagVideoWidth
{
	INT iWidth;
} VideoWidth;

//BLOCK_VIDEO_HEIGHT
typedef struct tagVideoHeight
{
	INT iHight;
} VideoHeight;



// BLOCK_FPGA_EXT_INFO
typedef struct tagFpgaExtInfo
{

#if todo
    FpgaRegInfo cFpgaRegInfo;
    AgcAwbInfo cAgcAwbInfo;
#endif

} FpgaExtInfo;



// 图片类型
typedef enum
{
    CAMERA_IMAGE_JPEG = 0x0001
    , CAMERA_IMAGE_JPEG_CAPTURE = 0x0002
    , CAMERA_IMAGE_JPEG_SLAVE = 0x0003
}
CAMERA_IMAGE_TYPE;

// 视频流类型
typedef enum
{
    CAMERA_VIDEO_H264 = 0x0001
    , CAMERA_FRAME_I = 0x1000
    , CAMERA_FRAME_P = 0x1001
    , CAMERA_FRAME_IP_ONE_SECOND = 0x1002
    , CAMERA_VIDEO_JPEG = 0x1003
}
CAMERA_VIDEO_TYPE;

// 记录集类型
typedef enum
{
    CAMERA_RECORD_NORMAL = 0x0001
    , CAMERA_RECORD_HISTORY = 0x0002
    , CAMERA_RECORD_STRING = 0x0003
    , CAMERA_RECORD_INLEFT = 0x0004
    , CAMERA_RECORD_STATUS = 0x0005
	, CAMERA_RECORD_TFDSTR = 0X0006
	, CAMERA_RECORD_STFDSTR = 0X0007

}
CAMERA_RECORD_TYPE;

// 连接端口定义
typedef enum
{
    CAMERA_IMAGE_LINK_PORT = 9900
    , CAMERA_VIDEO_LINK_PORT = 9901
    , CAMERA_RECORD_LINK_PORT = 9902
    , CAMERA_CMD_LINK_PORT = 9910
}
CAMERA_LINK_PORT;

#endif //_SW_NET_RENDER_OPT_H_

