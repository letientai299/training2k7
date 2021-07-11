# 2021-07-11

## Bai hoc

### `make` va `Makefile`

- `Makefile` la mot file text dac biet de `make` biet nen build cai gi, build
  nhu the nao.

```Makefile
target: dependencies
  rules
```

- `make target` se tim cach de "make" `dependencies` truoc, sau do chay cac lenh
  duoc viet ra trong phan `rules`.
- `dependencies` co the la 1 list, cach nhau bang khoang cach.
- `rules` la cac dong lenh shell script, chay tuan tu tu tren xuong duoi.

### Macro

- Ung dung thu nhat:

  Bat/tat feature luc compile

  ```c
  #include <stdio.h>

  #ifdef PRO_USER
  void pro_feature() { printf("Pro features are enabled!\n"); }
  #else
  void pro_feature() { }
  #endif

  int main()
  {
    pro_feature();
    printf("Hello\n");
    pro_feature();
  }
  ```

  - Compile ma khong co macro: `gcc -o main main.c`.
  - Compile voi macro enabled: `gcc -o main -DPRO_USER=0 main.c`

- Ung dung thu 2: tiet kiem va su dung lai code

```c
#pragma once

#include <stdio.h>

#define DEBUG 1
#define show(var)                                                              \
   if (DEBUG) {                                                                \
      printf("%s:%d|%s|" #var "=%d\n", __FILE__, __LINE__, __func__, var);     \
   }

void do_something(int n) { show(n); }
void do_another_thing(int x) { show(x); }
```

Xem them: [Standard Predefined Macros](https://gcc.gnu.org/onlinedocs/cpp/Standard-Predefined-Macros.html#Standard-Predefined-Macros)

## Bai tap ve nha
