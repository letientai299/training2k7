#include "./log.h"

#include <stdio.h>

int main()
{
  log_set_level(LOG_WARN);
  log_trace("hello world: n=%d", 100);
  log_debug("hello world: n=%d", 100);
  log_info("hello world: n=%d", 100);
  log_warn("hello world: n=%d", 100);
  log_error("hello world: n=%d", 100);
  log_fatal("hello world: n=%d", 100);
}
