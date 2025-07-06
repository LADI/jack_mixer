/* -*- Mode: C ; c-basic-offset: 2 -*- */
/*****************************************************************************
 *
 *   SPDX-FileCopyrightText: Copyright (C) 2006-2025 Nedko Arnaudov
 *   SPDX-License-Identifier: GPL-2.0-only
 *
 *****************************************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

#include "log.h"


void jack_mixer_log(int level, const char * format, ...)
{
  (void)level;
  va_list arglist;

  va_start(arglist, format);
  char format_with_name_prefix[512]; //512 string length for the log message. Buffer overflow risk negated by using snfprint:
  snprintf(format_with_name_prefix, 512, "[jack_mixer] %s\n", format);
  vfprintf(stderr, format_with_name_prefix, arglist);
  va_end(arglist);
}
