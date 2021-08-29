#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

// count returns the size of the linked list.
//
// 1 -> 2 -> 3 -> NULL
// ^
// head
//
// count(head) == 3
int count(struct ListNode* head)
{
    int cnt = 0;
    while (head != NULL) {
        cnt++;
        head = head->next;
    }

    return cnt;
}

struct ListNode* makeList(int n, ...)
{
    //       1->2->3->NULL
    //  ^    ^
    // pre->head
    struct ListNode pre = {};
    struct ListNode* parent = &pre;

    va_list arr;
    va_start(arr, n);

    for (int i = 0; i < n; i++) {
        struct ListNode* cur
            = (struct ListNode*)calloc(1, sizeof(struct ListNode));
        cur->val = va_arg(arr, int);
        parent->next = cur;
        parent = cur;
    }

    va_end(arr);
    return pre.next;
}

// print_list print the linked list
// Example: head = makeList(3,/*size*/, 1, 2, ,3);
// print_list(head)
// 1 -> 2 -> 3
void print_list(struct ListNode* head)
{
    //struct ListNode* tmp = head;
    while(head != NULL) {
        printf("%d ", head->val);
        head = head->next;
    }
}

int main()
{
    struct ListNode* head = makeList(
        // n: size of array
        6,
        // arr
        6, 2, 6, 10, 4, 1);
    print_list(head);
}