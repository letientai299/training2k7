# 2021-02-03

## Kiem tra bai tap

- [x] Huy + Hung:
  - Level 10: bandit game

## Bai hoc

- `find`, `man`, ...
- `grep`: `-A` (after), `-B` (before), `-C` (context)
- pipe `|`: "output" cua chuong trinh phia truoc tro thanh "input" cua chuong trinh
  phia sau.

### Standard files of Unix programs

Moi chuong trinh khi bat dau chay deu duoc chuan bi san 3 **file streams**:

- `stdin` (0): standard input:
  - `scanf`: keyboard input
  - khi dung pipe, vi du `prog_a | prog_b`, `stdin` cua `prog_b` chinh la `stdout` cua prog_a.
- `stdout` (1): stadard output,
  - vi du, data duoc in ra thong qua `printf` se di vao `stdout`
- `stderr` (2): stadard error

  - Chuong trinh se in ra loi thong qua `stderr`.

- `stdin`, `stdout`, `stderr` redirections
  - pipe `|`: redirect `stdout` of the left program to `stdin` of the right
    program
  - `>`: redirect `stdout` to a file
  - `<`: redirect `stdin` to a file
- Tricks, neu minh khong quan tam den errors trong qua trinh thuc thi lenh, co
  the dung `2>/dev/null` de ignore errors

## Bai tap

- Huy + Hung:
  - Level 15 trong bandit games.
