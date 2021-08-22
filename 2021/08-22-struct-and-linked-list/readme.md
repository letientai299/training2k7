# 2021-08-22

## Kiem tra bai tap ve nha

- ok

## Bai hoc

### Struct

- Data structure:

  - Primitive types: `int`, `long`, `float`, ...
  - Array: `int[]`, `long[]`, `float[]`, ...
    - String: `char[]`, ...
  - Pointer: `int*`, `char*`

```
int[10] arr = ...;
arr[10] // crash!!!!

int* p_arr = (int*)(calloc(10, sizeof(int)));
p_arr[10] // crash!!!
*(p_arr-1) // crash!!!

arr[0]
p_arr[0]

arr[0]
arr[1] == * (arr+1)
p_arr[1] == * (p_arr+1)
```

- Custom data structure: `struct` (structure), `union`, `typedef` (type definition)

Define `struct` person:

```
struct Person {
  char* name;
  int age;
}
```

### LinkedList

```
game program requests OS allocate 1GB RAM.
OS returns 1 GB splitted into multiple parts:

Linked list:

part 1 { start: 0x1232, end: 0x1321, size: 100MB, next: address of part 2}
part 2 { ..., size: 10MB, next: address of part 3}
...
part n { size: 123MB, next: NULL}
```

Dinh nghia:

- Singly linked list

```c
struct ListNode {
  int value;
  struct ListNode *next;
}
```

Questions:

- Cho cai `head` `LinstNode`, lam sao de dem so luong phan tu cua cai list do?

## Bai tap ve nha

- Struct:

  - Viet them cac field vao cho may cai struct co `TODO` trong file `person.c`.
    Ung voi moi struct, viet 1 ham `print_*` de in thong tin cua struct ra.
    Them example ben trong ham main. Deadline: Saturday 28/08/2021.

- List:
  - Suy nghi ve 1 so van de sau:
    - Lam sao de phat hien list co 1 circle
    - Lam sao de reverse cai list (`1->2->3`, reverse `3->2->1`)
    - Insert 1 phan tu vao vi tri chinh giua, 5th, ... cua list
    - Return 1 phan tu o 1 vi tri nao do trong list ( vi tri dau tien, vi tri
      thu 3 tu duoi len, ...).
  - Viet ham `print_list`. Deadline: Saturday 28/08/2021
