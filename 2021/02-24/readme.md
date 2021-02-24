# 2021-02-04

## Bai tap

- [x] Hung+Huy:
  - Level 15 bandit

## Bai hoc

### Standard streams

https://en.wikipedia.org/wiki/Standard_streams

- 1 chuong trinh: (`grep return gun.py`)

  - Nhan input:
    - Data: **noi dung** (content) cua file `gun.py`
    - Argument: `return`, va `gun.py` (name)
  - Xuat output:
    - Data: **noi dung** cua ket qua, cua file, ...
    - Behavior: thay doi filesystems, networks, ...
  - Xuat Error:
    - Khong duoc phep gop chung Error vao Data Output.

- Boi vi moi chuong trinh co 3 loai data khac nhau (in, out, error), nen moi
  chuong can 3 luong du lieu (data stream):
  - `stdin`: standard input
  - `stdout`: standard output
  - `stderr`: standarr error

```c
int main(int argv, char** argc) {
  scanf(...); // read from stdin
  ... // calculation
  if (ok) {
    printf(...); // write to stdout
  } else {
    fprintf(stderr, ...); // write _error_ to stderr
  }
  return 0;
}
```

### Viet lai lenh `cat` don gian

- Nhan 1 argument la 1 ten file
- In ra noi dung cua file do

- Tai lieu:

  - [C argc and argv Examples](https://www.thegeekstuff.com/2013/01/c-argc-argv/)

- Examples:
  - [`mcat.c`](./mcat.c) (my `cat`)

## Bai tap ve nha

- Doc va hieu `mcat.c`, tu minh viet lai no.
- Viet mot chuong trinh tuong tu, nhung in ra line number ben canh line.
