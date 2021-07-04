# 2021-07-04

## Bai hoc

### Merge sort

- Day la 1 thuat toan chia de tri (Divide and Conquer).
- Y tuong:

  - Neu co san **2 array da duoc sort**, thi co the **merge**. Vi du:
    `a = [1, 3, 7, 9, 10]`, `b = [2, 3, 4, 5]`

    ```
        i
    1 3 7 9 10

    a[i] > b[j]
            j
    2 3 4 5 x

    all = [1, 2, 3, 3, 4, 5, ...]
    ```

  - Neu array chi co 1 hoac 0 phan tu, thi no da duoc sort san!

- Vi du:

```
                  8, 4, 2, 5, 3, 7,
               8, 4, 2,                     --> 2, 4, 8
            8, 4,   2,                    2
        8,      4,                     -> 4, 8
```

### Chia nho code

- Copy cac thuat toan sort sang file `.h`.
- Xai 2 ham `main` khac nhau, 1 ham dung de test voi random arrays, size lon, 1
  ham de test voi array nho, biet truoc, thich hop cho viec debug.

## Bai tap

Code viet xong push len github va post link vao Discord.

- Huy: nghien cuu cach viet merge sort in-place
- Hung: viet merge sort.
