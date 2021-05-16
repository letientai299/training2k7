# 2021-05-16

## Bai Hoc

Code de convert 1 ky tu (`char`) sang 1 string (`char*`).

```c
char* str = (char*) malloc(2); // 1
str[0] = c;                    // 2
str[1] = 0;                    // 3
```

1. `malloc` (phai include `stdlib.h`) la ham de cap phat vung nho (allocate
   memory). `malloc` la viet tat cua **m**emory **alloc**cate.

   - `malloc(2)`: cap phat 1 vung nho de chua 2 byte.

   - `malloc(4 * sizeof(int))`: cap phat vung nho cho 16 bytes, du de chua 4
     bien `int`, boi vi `sizeof(int)`, trong phan lon truong hop la 4 bytes (32
     bit)

   - `calloc` co tac dung tuong tu.

   - `malloc` tra ve `void*`, boi vi `malloc` khong biet duoc kieu du lieu cua
     con tro (pointer). Vay nen developer phai _cast_ con tro ve kieu du lieu ma
     ho muon su dung. Trong truong hop o tren, minh cast ve `char*`, vi minh
     muon dung vung nho vua duoc cap phat de tao ra string.

2. Gan byte thu nhat cua `str` thanh bien `c`.
3. Gan byte thu hai cua `str` thanh 0.

String trong C, C++, Java va mot vai ngon ngu khac chi don gian la 1 chuoi cac
ky tu ket tuc bang so 0 (`NULL`).

## Bai tap ve nha

- Doc hieu code [`string.c`](./string.c).
- Lam mot vai thi nghiem de kiem chung cach hiieu cua minh ve `char*`, pointer
  arithmetic va `malloc`:
  - Dieu gi xay ra khi `malloc` voi 1k byte, 1 trieu byte hoac 1 ti byte? Tai
    sao?
  - Dieu gi xay ra khi cong (`+`) hoac tru (`-`) pointer vuot qua gioi han cua
    memory?
  - Thu nghiem voi kieu du khac, `int*`, `float*`, ...
  - Thu nghiem voi `calloc`, va hieu su khac nhau giua `malloc` va `calloc`.
- Tim lai cach push code len Github

## Lo trinh hoc

- **Hieu ro ve pointer**
- **Biet cach copy, free, allocate ... memory**
- Algorithm tren array:
  - Seacrh
  - Sort
- Algorithm tren linked list:
  - Single linked list: create, add, insert, delete, find, count, revert, ...
  - Double linked list: ...
- Algorithm tren tree:
  - Binary tree.
  - Recursion
  - Greedy
  - Path finding
