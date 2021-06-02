# 2021-06-02

## Giai bai tap

https://www.hackerrank.com/domains/c?filters%5Bsubdomains%5D%5B%5D=c-introduction&filters%5Bsubdomains%5D%5B%5D=c-conditionals-and-loops

### Hello world

https://www.hackerrank.com/challenges/hello-world-c/problem

```c
scanf("%[^\n]", &s);
```

- `"%[^\n]"`:
  - `%`: khoi dau pattern. `scanf` va `printf` nhan 1 string pattern. `printf`
    in ra dua theo pattern, con `scanf` parse input dua theo pattern do.
  - `[^\n]`:
    - `\n`: new line (xuong dong)
    - `[]`: 1 dang syntax cua [regular expression](https://www.hackerrank.com/domains/regex),
      cap dau ngoac co nghia la chi xu ly
    - Trong regular expression, `^` dao nguoc bat ky thu gi theo sau no.
      - `^\n`: chap nhan bat ky thu gi mien la khong phai new line (`\n`)
      - `^1`: chap nhan bat ky thu gi mien la khong phai ky tu `1`.

Luu y rang `scanf` support chi 1 it syntax cua regex (regular expression),
khong phai toan bo.

### Function pointer

Coi [example](./func_pointer.c)

### Condition

Coi [condition.c](./condition.c)

### For loop

Coi [for.c](./for.c)

## Bai Tap

- Hung: tiep tuc lam cho het Intro va Condition
- Huy: Xem lai code, lam cho code gon va dep hon, lam them bai tap tren
  Hackerrank.
