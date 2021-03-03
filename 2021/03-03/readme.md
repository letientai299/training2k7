# 2021-03-03

## Bai tap

- Hung: hieu duoc mot chut ve `mcat.c`
- Huy: hieu duoc, lam duoc phan nang cao (in ra line number).

## Bai hoc

- Syntax de dinh nghia array voi size cho truoc.

```c
byte byteArray[8];
char charArray[8];
short shorts[4]; //  1 short = 2 bytes
int ints[4];     //  1 int = 4 bytes
```

- Size cua mot vai kieu du lieu trong C:

  - 1 char = 1 byte
  - 1 short = 2 bytes
  - 1 int = 4 bytes
  - 1 "word" = 4 bytes = 1 int = 1 float = 1 size_t = 1 unsigned int = ...

- Biet duoc mot vai khai niem:
  - **Memory address**
  - **Pointer**
  - **Dereference operator**
  - **Pointer arithmetic**

```c
byteArray=8
byteArray[i] -> doc data cua phan tu thu i ben trong array
\*byteArray = byteArray[0]
byteArray[3]

ints=36
_ints = ints[0]
ints[2]
_(ints+sizeof(int)) = ints[1]
*(ints+sizeof(int)*2) = ints[2]
*(ints+sizeof(int)*3) = ints[3]
```

| Row\Column | 0             | 1    | 2    | 3    | 4        | 5    | 6    | 7    |
| ---------- | ------------- | ---- | ---- | ---- | -------- | ---- | ---- | ---- |
| 0          | Byte          | Byte | Byte | Byte | Byte     | Byte | Byte | Byte |
| 1          | **byteArray** | Byte | Byte | Byte | Byte     | Byte | Byte | Byte |
| 2          | Byte          | Byte | Byte | Byte | Byte     | Byte | Byte | Byte |
| 3          | Byte          | Byte | Byte | Byte | Byte     | Byte | Byte | Byte |
| 4          | Byte          | Byte | Byte | Byte | **ints** | Byte | Byte | Byte |
| 5          | Byte          | Byte | Byte | Byte | Byte     | Byte | Byte | Byte |
| 6          | Byte          | Byte | Byte | Byte | Byte     | Byte | Byte | Byte |
| 7          | Byte          | Byte | Byte | Byte | Byte     | Byte | Byte | Byte |
| 8          | Byte          | Byte | Byte | Byte | Byte     | Byte | Byte | Byte |
| 9          | Byte          | Byte | Byte | Byte | Byte     | Byte | Byte | Byte |
| 10         | Byte          | Byte | Byte | Byte | Byte     | Byte | Byte | Byte |
| 11         | Byte          | Byte | Byte | Byte | Byte     | Byte | Byte | Byte |

## Bai tap ve nha

- Tim hieu nhieu hon ve cach khai niem lien quan den Array.
- Lam duoc level 1 va level 2 trong bai tap ve `mcat`.

## Giao dien cua `mcat` sau khi cai thien

- Level 1: Lam duoc cot ben trai (line number + gach doc)
- Level 2: Lam duoc line tren va line duoi (line number + gach doc)
  - check string length in C
  - understand fgets in C
  - string array in C
- Level 3: lam duoc cot ben phai. Keyword lien quan de search Google:
  - String padding in C
  - printf padding in C

```
Level 1                                                   Level 3
 |                                                          |
 V                                                          V
  +---------------------------------------------------------+  <- Level 2
 1| #include <stdio.h>                                      |
 2| #include <stdlib.h>                                     |
 3|                                                         |
 4| // argc is length cua array argv                        |
 5| // argv is an array, that:                              |
 6| // - starts with "name" of the program                  |
 7| // - following are the rest of the arguments            |
 8| int main(int argc, char* argv[])                        |
 9| {                                                       |
10|   // if we only have 1 argument,                        |
11|   // then print a message to ask user for file name.    |
12|   if (argc == 1) {                                      |
13|     printf("Need file name");                           |
14|     return 0;                                           |
15|   }                                                     |
16|                                                         |
17|   // note that argv[0] is the program name.             |
18|   char const* filename = argv[1];                       |
19|                                                         |
20|   // fopen: to open a file given its name               |
21|   // https://www.cplusplus.com/reference/cstdio/fopen   |
22|   FILE* file = fopen(filename, "r");                    |
23|   char lines[512];                                      |
24|                                                         |
25|   // fgets: to read a line in a file                    |
26|   // https://www.cplusplus.com/reference/cstdio/fgets   |
27|   int lineNum = 1;                                      |
28|   while (fgets(line, sizeof(line), file)) {             |
29|     printf("%d| %s", lineNum, line);                    |
30|     lineNum++;                                          |
31|   }                                                     |
32|                                                         |
33|   // fclose: close the opening file                     |
34|   // https://www.cplusplus.com/reference/cstdio/fclose  |
35|   fclose(file);                                         |
36|   return 0;                                             |
37| }                                                       |
  +---------------------------------------------------------+ <- level 2
```
