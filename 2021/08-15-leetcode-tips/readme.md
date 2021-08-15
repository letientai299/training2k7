# 2021-08-15

## Tips for leetcode

- Viet unit test
- Su dung Makefile (Huy tham khao ben repo cua Hung)
- Khi viet test, co gang cover tat ca cac truong hop dac biet:

  - Neu input la `int`:

    - Edge cases: 0, 1, -1, 7, 13, 1024 (2^10), -2^31, 2^31-1

  - Neu input la `(int* arr, int size)`, thi truong hop dac biet la:

    - `arr` la `NULL`
    - `size` la 0, 1
    - Tat ca cac phan tu trong mang: bang nhau, deu nho hon 0 hoac lon hon 0.
    - `size` rat lon.

  - Neu input la `char* str`, edge cases la:
    - `NULL`
    - Empty: `""`
    - Lenght rat lon (10^5, ...)

- Su dung tool nhu `gcov`, `gcovr` de generate code coverage, de biet duoc phan
  nao trong cua minh chua duoc test.

  - https://www.tutorialspoint.com/unix_commands/gcov.htm
  - https://github.com/gcovr/gcovr

- Hieu ro `char*`/string trong C.

  - Static string: string duoc viet thang ra trong code, khong the chinh sua
    duoc.
  - Dynamic allocated string: duoc tao ra luc runtime, co the modify.

- Chiu kho hoc xai cac ham strong `string.h`, `stdlib.h`, hoc cach xai `sort`,
  `abs`, `labs`, `strlen`, `strncpy`,...

## Bai tap ve nha

- Huy: lam cac bai tap leetcode moi su dung ky thuat viet test, Makefile
- Huy+Hung:

  - Cover it nhat 90% cho cac thuat toan trong tat ca cac bai tap leetcode trong
    7 ngay tiep theo.

- Tuan sau: hoc ve `struct`

Common data structure

- primitive types (int, char, ...)
- array (int[], char[])
- pointer (int*, char*)

- Linked list / double linked list
- Stack
- Queue / Dequeue
- Tree:
  - Binary tree
    - Binary seach tree
- Heap
- Map/Dictionary
- Set
