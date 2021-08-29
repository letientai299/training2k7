# 2021-08-29

## Kiem tra bai tap ve nha

- Hung: 75%
- Huy: 100%

## Bai hoc

### Data structure vs Algorithm

- Algorithm khong the chay nhanh, hoac tham chi ko the su dung duoc neu dung sai
  data structure.

- 2 loai data structure basic:
  - Array
  - Linked List

Tat ca cac loai data structure khac deu duoc cai dat bang Array va/hoac Linked
List.

Vi du: HashMap / Dictionary, ben duoi se la array va list

Vi du: Tree

```
          1
        /   \
      2      3
    /  \
  1     3
```

Vi du: Graph

```
        1
       / \
      2 - 3
    /  \ /
  1     3
```

### Mot vai ky thuat thao tac tren list

- **Traversal**

  - 1 runner
  - 2 runners (fast and slow pointers)

- Insertion

  - Insert from beginning:

  ```c
  ListNode* prepend(ListNode* head, value) {
    ListNode* node = createNode(value);
    node->next = head;
    return node;
  }
  ```

  - Insert at the end

  ```c
  ListNode* append(ListNode* head, value) {
    ListNode* node = createNode(value);
    if (head == NULL) {
      return node;
    }

    ListNode *runner = head;
    while (runner->next!= NULL ) {
      runner =  runner.next;
    }

    runner->next = node;
    return head;
  }
  ```

  - Insert in the middle (after or before something)

  ```c
  ListNode* insert_after(int target, ListNode* head, int newVal) {
    // TODO
    // head: 1 -> 2 -> 3 -> 4
    // insert_after(3, head, 10)
    // 1 -> 2 -> 3 -> 10 -> 4
  }

  ListNode* insert_before(int target, ListNode* head, int newVal) {
    // TODO
    // head: 1 -> 2 -> 3 -> 4
    // insert_before(3, head, 10)
    // 1 -> 2 -> 10 -> 3 -> 4
  }
  ```

- Deletion

  - Delete head

  ```c
  ListNode* delete_head(ListNode* head) {
    return head ? head->next : NULL;
  }
  ```

  - Delete tail

  ```c
  ListNode* delete_tail(ListNode* head) {
    if(head == NULL || head->next == NULL) {
      return NULL;
    }

    head->next = delete_tail(head->next);
    return head;
  }
  ```

  - Delete middle

  ```c
  ListNode* delete(ListNode* head, int val) {
    // TODO
    // 1 -> 2 -> 3 -> 4
    // delete(head, 3)
    // 1 -> 2 -> 4
  }
  ```

- Search

### Github Pull Request

## Bai tap ve nha

- Giai mot vai bai ve linked list (xem them [danh sach bai tap ve List tren
  LeetCode](https://leetcode.com/problemset/algorithms/?topicSlugs=linked-list))

  - [21. Merge two sorted lists](https://leetcode.com/problems/merge-two-sorted-lists/)
  - [206. Reverse linked list](https://leetcode.com/problems/reverse-linked-list/)
  - [234. Palindrome linked list](https://leetcode.com/problems/palindrome-linked-list/)
  - [237. Delete node in a linked list](https://leetcode.com/problems/delete-node-in-a-linked-list/)
  - [876. Middle of the linked list](https://leetcode.com/problems/middle-of-the-linked-list/)

    - Technique: fast and slow pointers

    ```
      1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7
                                 fast
                    slow
    ```

  - [1290. Convert Binary Number in a Linked List to Integer](https://leetcode.com/problems/middle-of-the-linked-list/)
