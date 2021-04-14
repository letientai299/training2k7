# 2021-04-14

## Kiem tra bai tap

- Khai niem:

  - [pseudocode](https://en.wikipedia.org/wiki/Pseudocode): Trong khoa học máy
    tính, mã giả là một mô tả bằng ngôn ngữ đơn giản về các bước trong một thuật
    toán hoặc một hệ thống khác. Mã giả thường sử dụng các quy ước cấu trúc của
    một ngôn ngữ lập trình thông thường, nhưng nhằm mục đích đọc của con người hơn
    là đọc máy.

- Cau truc cua 1 chuong trinh chay trong thoi gian dai, nhan va xu ly input cua
  user (example: editor, browser, games, OS, ...)

  ```c
  main() {
    init() // load data, chuan bi memmory, login, check account, ...
    while(condition){
      logic()
    }
    cleanup_and_shutdown()
  }
  ```

- Cau truc cua game tictactoe

```c
// game tictactoe
main() {
  init_data() // create board, ...
  current_player = 'X'
  while (is_game_ended()) {
    pick_player() // let's X play
    ask_player_to_select_cell()
    update_board()
    change_to_next_player()
  }
  print_game_result() // who win, or draw?
}

change_to_next_player(){
  if current_player == 'X' {
    current_player = 'O'
  } else {
    current_player = 'X'
  }
}

ask_player_to_select_cell() {
  printf("Input cell coordinator (x, y)")
  printf("Input x: ")
  scanf("...")
  printf("Input y: ")
  scanf("...")
  // ...
}

is_game_ended() {
  // check if there's any player win
  // (there's any 3 straight cells have same value),
  // or if there's no more cell to play (draw)
}
```

## Bai tap

- Xem lai va lam bai tap tu bai 4 cho den bai 12 trong [Tai lieu tham
  khao](https://nguyenvanhieu.vn/khoa-hoc-lap-trinh-c/#phan-3-ham-trong-c)
- Neu co the, thu viet 1 it code cho game tictactoe:
  - Hoc ve scanf
  - In ra 1 cai bang 3 x 3
