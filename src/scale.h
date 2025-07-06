/* -*- Mode: C ; c-basic-offset: 2 -*- */
/*****************************************************************************
 *
 *   This file is part of jack_mixer
 *
 *   SPDX-FileCopyrightText: Copyright (C) 2006-2025 Nedko Arnaudov
 *   SPDX-License-Identifier: GPL-2.0-only
 *
 *****************************************************************************/

#ifndef _SCALE_H
#define _SCALE_H

typedef void * jack_mixer_scale_t;

jack_mixer_scale_t
scale_create();

bool
scale_add_threshold(
  jack_mixer_scale_t scale,
  float db,
  float scale_value);

void
scale_remove_thresholds(
  jack_mixer_scale_t scale);

void
scale_calculate_coefficients(
  jack_mixer_scale_t scale);

double
scale_db_to_scale(
  jack_mixer_scale_t scale,
  double db);

double
scale_scale_to_db(
  jack_mixer_scale_t scale,
  double scale_value);

void
scale_destroy(
  jack_mixer_scale_t scale);

#endif /* #ifndef _SCALE_H */
