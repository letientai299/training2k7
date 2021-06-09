# 2021-06-09

## Kiem tra bai tap

- Hung:
  - Thieu bai [BitWise](https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem) va
    [Printing Pattern](https://www.hackerrank.com/challenges/printing-pattern-2/problem)
- Huy:
  - Vuot mong doi, lam het bai tap va them dc 4 bai dau tien ve Arrays

## Bai hoc

- Loi giai cho bai Printing Pattern:

```c
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n;
  scanf("%d", &n);
  int size = 2 * n - 1;
  int mid = n - 1;
  for (int x = 0; x < size; ++x) {
    for (int y = 0; y < size; ++y) {
      int diff_x = abs(x - mid);
      int diff_y = abs(y - mid);
      if (diff_x < diff_y) {
        diff_x = diff_y;
      }

      int v = 1 + diff_x;
      printf("%d ", v);
    }
    printf("\n");
  }
  return 0;
}
```

- Thuat toan: [Bubble sort](https://www.geeksforgeeks.org/bubble-sort/)
  - Sap xep `int` array theo thu tu tang dan.
  - Xem visualization o link sau day: https://visualgo.net/en/sorting
  - [Code sample](./buble_sort.c)

## Bai tap

- Huy + Hung:

  - Viet `reverse_bubble_sort.c`: sort tu lon den nho.
  - Viet `selection_sort.c`
  - Huy: Optional, tu viet nhieu thuat toan sort nhat co the.
  - Push code len github.

- Hung:

  - Viet 2 chuong trinh:

    - `dec2bin.c`: convert he thap phan sang nhi phan
    - `bin2dec.c`: convert he nhi phan sang thap phan

    Template code cho `dec2binc.c`. Khi lam `bin2dec.c` thi tao ra 1 file moi,
    sua ten bien, ten function lai cho thich hop.

    ```c
    #include <stdio.h>
    #include <stdlib.h>

    char* dec_to_bin(int n)
    {
      // TODO
    }

    int main()
    {
      char s[1000];
      printf("Input a decimal number: ");
      scanf("%s", s);

      int n = atoi(s);
      char* bin = dec_to_bin(n);
      printf("binary output: %s", bin);
    }
    ```
