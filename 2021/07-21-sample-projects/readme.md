# 2021-07-21

## Bai tap ve nha

- Thu nghiem compile 1 vai log library khac:
  - Huy + Hung: fail

## Bai hoc

- Vi sao can phai co file `*.h` (header) va file `*.c`?

  - File `*.h` dung de chua **public** API, noi cach khac la nhung function ma nguoi
    nao `include` thi co the goi duoc.
  - File `*.c` dung de chua **private** API, chi danh rieng cho tac gia cua
    library xai thoi.

- **Public** API, trong phan lon truong hop, khong duoc thay doi. Boi vi neut
  thay doi, code cua user co the fail to compile.

- **Private** API co the thay doi tuy y cua tac gia.

- **Rule**:
  - Function definition phai nam trong file `.h`
  - Function body phai nam trong file `.c`

## Bai tap ve nha

- Huy+Hung:
  - Bat chuoc folder structure cua [`./sample`](./sample) de sap xep lai
    folder structure cua cai sort project.
  - Nop lai bai tap sort cho Tai vao ngay 24/07
  - Ngay 25/07, Tai kiem tra bai tap:
    - Yeu cau compile, chay code thi phai lam duoc
    - Co the giai thich bat cu doan code, function, hoac syntax nao trong tat ca
      code cua bai tap.
