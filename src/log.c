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
  vfprintf(stderr, format, arglist);
  va_end(arglist);
}
