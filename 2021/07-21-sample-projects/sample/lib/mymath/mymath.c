#include "./mymath.h"

int sum(int a, int b) { return a + b; }

/*
// cach 1: dung vong lap
int factorial(int n)
{
  if (n <= 0) {
    return 1;
  }

  int result = 1;
  for (int i = 1; i <= n; i++) {
    result *= i;
  }
  return result;
}
*/

// cach 2: de quy (recursion)
int factorial(int n)
{
  if (n <= 0) {
    return 1;
  }

  return n * factorial(n - 1);
}

/*
  Fibonacci:
  0 1 1 2 3 5 8 13 ...
  f(0) = 0
  f(1) = 1
  f(n) = f(n-1) + f(n-2)

Recursion
---------

                        f(7)
              f(6)               f(5)
        f(5)    f(4)         f(4)   f(3)
    f(4)  f(3)            f(3) f(2)

    ...

f(1)   f(0)

2^6 computations.

f(n) requires 2^n
  */

/*
 // Very slow!
int fib(int n)
{
  if (n <= 1) {
    return n;
  }

  return fib(n - 1) + fib(n - 2);
}
*/

int fib(int n)
{
  int a = 0;
  int b = 1;
  while (n > 0) {
    int t = a + b;
    a = b;
    b = t;
    n--;
  }

  return a;
}
