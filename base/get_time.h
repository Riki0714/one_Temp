/********************************************************************************
 *      Copyright:  (C) 2023 iot<iot@email.com>
 *                  All rights reserved.
 *
 *       Filename:  getTime.h
 *    Description:  This file 
 *
 *        Version:  1.0.0(03/02/23)
 *         Author:  iot <iot@email.com>
 *      ChangeLog:  1, Release initial version on "03/02/23 13:24:52"
 *                 
 ********************************************************************************/

#ifndef _GETTIME_H
#define _GETTIME_H

int get_time(char *time, int size);
int get_time_pipe(char *buf, int size);

#endif

