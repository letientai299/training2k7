# 2021-06-30

## Bai tap ve nha

- Huy: Xong duoc Quick Sort, thieu Merge Sort
- Hung: Thieu Quick Sort va Merge Sort.

## Bai hoc

- Do phuc tap ve thoi gian thuat toan (Time Complexity) cua cac thuat toan
  Bubble, Insertion, Selection Sort la `O(n^2)`. Co nghia la, neu `n` (size cua
  array) tang len k lan, thi thoi gian can thiet de cac thuat toan do sort cai
  array se tang len k^2 lan.

  - Vi du: Buble sort chay tren 1 array 1000 phan tu, mat 1s. Suy ra, neu sort
    4000 phan tu, mat 16 (4^2) giay.
  - Selection sort sap xep 1 array 128 phan tu mat 0.3s. Selection sort chay
    tren 1 array co 1500 phan tu mat 41.2s.

- Quick Sort, Merge Sort, Heap Sort co Time Complexity: `O(n log(n))`.

  - `log(n)` co nghia la logarithm cơ số 2 của n. Neu `y = log(x) <=> 2^y = x`.
    Vi du:
    - `log(2) = y <=> 2^y = 2 <=> y = 1`
    - `log(16) = y <=> 2^y = 16 <=> y = 4`
    - `log(128) = 7`

- Folder structure va code file.

  - Su dung 3 dong code sau day voi bat ky file header nao de tranh bi loi khi
    `#include`:

    ```c
    #ifndef _LIB_NAME_H_
    #define _LIB_NAME_H_
    ...library code...
    #endif
    ```

  - Su dung 1 dong code sau day voi bat ky file header nao de tranh bi loi khi
    `#include`:

    ```c
    #pragma once
    ...library code...
    ```
