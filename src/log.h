/* -*- Mode: C ; c-basic-offset: 2 -*- */
/*****************************************************************************
 *
 *   SPDX-FileCopyrightText: Copyright (C) 2006-2025 Nedko Arnaudov
 *   SPDX-License-Identifier: GPL-2.0-only
 *
 *****************************************************************************/

#ifndef _LOG_H
#define _LOG_H

void jack_mixer_log(int level, const char * format, ...);

#define LOG_LEVEL_DEBUG      0
#define LOG_LEVEL_INFO       1
#define LOG_LEVEL_WARNING    2
#define LOG_LEVEL_NOTICE     3
#define LOG_LEVEL_ERROR      4
#define LOG_LEVEL_FATAL      5
#define LOG_LEVEL_BLACK_HOLE 6

#if !defined(LOG_LEVEL)
#define LOG_LEVEL LOG_LEVEL_WARNING
#endif

#if LOG_LEVEL <= LOG_LEVEL_DEBUG
# define LOG_DEBUG(format, ...)              \
  jack_mixer_log(LOG_LEVEL_DEBUG,               \
                 format, ## __VA_ARGS__)
#else
# define LOG_DEBUG(format, ...)
#endif

#if LOG_LEVEL <= LOG_LEVEL_INFO
# define LOG_INFO(format, ...)               \
  jack_mixer_log(LOG_LEVEL_INFO,                \
                 format, ## __VA_ARGS__)
#else
# define LOG_INFO(format, ...)
#endif

#if LOG_LEVEL <= LOG_LEVEL_WARNING
# define LOG_WARNING(format, ...)            \
  jack_mixer_log(LOG_LEVEL_WARNING,             \
                 format, ## __VA_ARGS__)
#else
# define LOG_WARNING(format, ...)
#endif

#if LOG_LEVEL <= LOG_LEVEL_NOTICE
# define LOG_NOTICE(format, ...)             \
  jack_mixer_log(LOG_LEVEL_NOTICE,              \
                 format, ## __VA_ARGS__)
#else
# define LOG_NOTICE(format, ...)
#endif

#if LOG_LEVEL <= LOG_LEVEL_ERROR
# define LOG_ERROR(format, ...)              \
  jack_mixer_log(LOG_LEVEL_ERROR,               \
                 format, ## __VA_ARGS__)
#else
# define LOG_ERROR(format, ...)
#endif

#if LOG_LEVEL <= LOG_LEVEL_FATAL
# define LOG_FATAL(format, ...)              \
  jack_mixer_log(LOG_LEVEL_FATAL,               \
                 format, ## __VA_ARGS__)
#else
# define LOG_FATAL(format, ...)
#endif

#endif /* #ifndef _LOG_H */
