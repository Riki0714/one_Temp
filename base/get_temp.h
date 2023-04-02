/********************************************************************************
 *      Copyright:  (C) 2023 iot<iot@email.com>
 *                  All rights reserved.
 *
 *       Filename:  get_temp.h
 *    Description:  This file 
 *
 *        Version:  1.0.0(02/26/23)
 *         Author:  iot <iot@email.com>
 *      ChangeLog:  1, Release initial version on "02/26/23 16:40:58"
 *                 
 ********************************************************************************/

#ifndef _GET_TEMP_H
#define _GET_TEMP_H

#define TEMP_STR_LEN  32

typedef struct		temp_str_infor{
	char		serialNumber[TEMP_STR_LEN];
	char		date[TEMP_STR_LEN];
	char		tempValue[TEMP_STR_LEN];
} Temp_str;

int get_name(char *serialNum, int len);
int get_file_content(char *allPath, char *content, int conLen);
int get_temp_str(char *buf, int len);

#endif

