#pragma once

#include <stdio.h>

#define debugf(fmt, ...)                                                       \
  printf("%s:%d - %s | " fmt "\n", __FILE__, __LINE__, __func__, __VA_ARGS__)
