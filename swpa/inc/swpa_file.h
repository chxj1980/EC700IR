/**
* @file swpa_file.h 
* @brief 文件操作头文件
*
* 定义了文件操作的基本函数，具体的操作由子类去实现,通过文件名来判断访问哪个设备\n
*
* @copyright Signalway All Rights Reserved
* @author zhouy
* @date 2013-02-27
* @version 1.0
*/

#ifndef _SWPA_FILE_H_
#define _SWPA_FILE_H_

#include "swpa.h"

#ifdef __cplusplus
extern "C"
{
#endif



enum 
{
	SWPA_SEEK_SET = 0,
	SWPA_SEEK_CUR,
	SWPA_SEEK_END,

	SWPA_SEEK_MAX
};


enum 
{
	SWPA_FILE_SET_READ_TIMEOUT,	    //设置读超时时间
	SWPA_FILE_SET_WRITE_TIMEOUT,    //设置写超时时间
	SWPA_FILE_IOCTL_COMM_SET_ATTR,  //设置串口的属性
	SWPA_FILE_IOCTL_COMM_IS_RS485,  //设置串口协议RS232还是RS485
	SWPA_FILE_IOCTL_GET_MAX_SIZE,	//获得文件最大大小
	SWPA_FILE_IOCTL_TRANCATE,	  	//截取文件到指定大小
	SWPA_FILE_IOCTL_MAX
};




/**
* @brief 打开文件基函数
*
* 根据文件名规则调用不同设备的打开文件的函数
* 
* @param [in] filename 文件名。 目前支持 普通文件、有名管道文件，串口文件，EEPROM、FLASH、DSPLINK，规定文件名如下：
* - 文件名为“EEPROM/设备id/设备段名”的是访问EEPROM设备
* - 文件名为“FLASH/设备id/设备段名”的是访问FLASH设备
* - 文件名为“DSPLINK/设备id”为访问DSPLINK设备
* - 文件名为“COMM/设备id”为访问串口设备
* - 文件名为“FIFO/管道名”为访问FIFO文件
* - 文件名为“BLOCK/文件名”为访问普通磁盘文件
* - 其他文件名的为普通的磁盘文件
* @param [in] mode 文件打开模式,有以下几个模式:
* - "r"  : 只读方式打开
* - "r+" : 读写方式打开
* - "w" :  只写方式打开，文件不存在则先创建
* - "w+" :  读写方式打开，文件不存在则先创建
* - "a" :  追加方式打开
* - "a+" : 追加方式打开,可读
* @retval 文件描述符: 成功(实际上就是SWPA_FILEHEADER结构体指针)
* @retval SWPAR_FAIL : 打开失败
* @retval SWPAR_INVALIDARG : 参数非法
*/
extern int swpa_file_open(
	const char * filename, 
	const char * mode
);




/**
* @brief 关闭文件
*
* 
* @param [in] fd 文件描述符
* @retval SWPAR_OK : 成功
* @retval SWPAR_FAIL : 失败
* @retval SWPAR_NOTIMPL : 未实现
*/
extern int swpa_file_close(
	int fd
);





/**
* @brief 判断是否到了文件尾部
* @param [in] fd 文件描述符
* @retval 0 : 没有到文件尾部，
* @retval -1 : 到了文件尾部
* @attention 这个函数的返回值比较特殊，请区别对待
*/
extern int swpa_file_eof(
	int fd
);




/**
* @brief 改变文件指针
*
* 
* @param [in] fd 文件描述符
* @param [in] offset 指针的偏移量
* @param [in] pos 指针偏移量的起始位置，取值范围是: 
* - SWPA_SEEK_SET : 文件头
* - SWPA_SEEK_CUR : 当前位置
* - SWPA_SEEK_END : 文件尾
* @retval SWPAR_OK : 成功
* @retval SWPAR_FAIL : 失败
* @retval SWPAR_NOTIMPL : 未实现
*/
extern int swpa_file_seek(
	int fd, 
	int offset, 
	int pos
);





/**
* @brief 获得当前文件指针位置
*
* 
* @param [in] fd 文件描述符
* @retval 文件指针位置: 成功
* @retval SWPAR_FAIL : 失败
* @retval SWPAR_INVALIDARG : 参数非法
* @retval SWPAR_NOTIMPL : 未实现
* @attention 这个函数的返回值比较特殊，请区别对待
*/
extern int swpa_file_tell(
	int fd
);






/**
* @brief 对文件描述符的控制
*
*
* 比如串口波特率、读写的超时时间设置等等
* 
* @param [in] fd 文件描述符
* @param [in] cmd 命令标识
* @param [in] args 命令标志参数
* @retval SWPAR_OK : 成功
* @retval SWPAR_FAIL : 失败
* @retval SWPAR_NOTIMPL : 未实现
*/
extern int swpa_file_ioctl(
	int fd, 
	int cmd, 
	void* args
);






/**
* @brief 读文件数据
*
* 
* @param [in] fd 文件描述符
* @param [in] buf 读数据缓冲区，必须非空
* @param [in] size 缓冲区大小，必须大于0，单位为字节
* @param [out] ret_size 返回读到的数据大小，若不关心该数值，可传NULL
* @retval SWPAR_OK : 成功
* @retval SWPAR_FAIL : 失败
* @retval SWPAR_NOTIMPL : 未实现
*/
extern int swpa_file_read(
	int fd, 
	void* buf, 
	int size, 
	int* ret_size
);



/**
* @brief 写文件数据
*
* 
* @param [in] fd 文件描述符
* @param [in] buf 写数据缓冲区
* @param [in] size 缓冲区大小
* @param [out] ret_size 返回写入的数据大小
* @retval SWPAR_OK : 成功
* @retval SWPAR_FAIL : 失败
* @retval SWPAR_NOTIMPL : 未实现
*/
extern int swpa_file_write(
	int fd, 
	void* buf, 
	int size, 
	int* ret_size
);


#ifdef __cplusplus
}
#endif


#endif //_SWPA_FILE_H_

