#include "./lib/log/log.h"
#include "./lib/mymath/mymath.h"

#include <stdio.h>

int main()
{
  int a = 1;
  int b = 2;
  int s = sum(a, b);
  log_debug("sum(%d, %d) = %d", a, b, s);

  int n = 5;
  log_debug("factorial(%d) = %d", n, factorial(n));

  for (int i = 0; i <= 20; i++) {
    log_debug("fib(%d) = %d", i, fib(i));
  }

  n = 44;
  log_debug("fib(%d) = %d", n, fib(n));
}
