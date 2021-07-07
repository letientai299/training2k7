# 2021-07-09

## Bai tap ve nha

- Hung: code duoc merge sort
- Huy: hieu y tuong merge sort O(1) space.

## Bai hoc

### Tong ket kien thuc

- 5 thuat toan sort:

  - Quick
  - Merge
  - Buble
  - Insertion
  - Selection

- Read from file
- `argc` va `argv` co y nghia gi
- `printf` va cac dang format de in ra gia tri cua bien.
- convert tu `char*` sang `int`, `double`, ...: `atof`, `atoi`, `strtol`, ...
- Convert tu `int`, `double`, `float` sang `char*`: `itoa`, ...
- Chia code ra thanh file `.h` (header) va file `.c` (code).

### Test project

- Tai: viet chuong trinh generate ra 1 file chua cac so trong khoang 0 cho den
  1000000, cac so nay nam tren nhieu dong khac nhau.
- Viet 5 chuong trinh doc cai file anh generate, parse tat ca input thanh so,
  luu vao trong 1 array, va sort no. Moi chuong trinh dung 1 thuat toan sort da
  hoc.
  - Bonus: viet duoc them cac chuong trinh khac su dung cac thuat toan sort
    khac: heap sort, radix, counting sort, tim sort.
  - Bonus: su dung git de luu lai toan bo code cho project.
  - Bonus: xai dc `getopt` de gop ca 5 chuong trinh lai thanh 1.

### Bai hoc

- `getopt` (va `getopt_long`) de xu ly flag:
  - `git -h`: show help cua git
  - `make -h`: show help cua git
  - https://www.geeksforgeeks.org/getopt-function-in-c-to-parse-command-line-arguments/
