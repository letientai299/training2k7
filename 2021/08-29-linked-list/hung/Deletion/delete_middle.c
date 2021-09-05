#include <stdio.h>

#include "../lib/list.h"

int countNode(struct ListNode* head) {
    int count = 0;
    while (head != NULL) {
        head = head->next;
        count++;
    }
    return count;
}
struct ListNode* delete (struct ListNode* head, int val) {
    // TODO
    // 1 -> 2 -> 3 -> 4
    // delete(head, 3)
    // 1 -> 2 -> 4
    if (head == NULL) {
        return NULL;
    }
    if (head->next == NULL) {
        return NULL;
    }
    struct ListNode* node = head;
    int count = countNode(head);
    int middle = count / 2;
    while (middle-- > 1) {
        head = head->next;
        head->next = head->next->next;
    }
    print_list(node);
    printf("\n");
    return node;
}
void test(struct ListNode* head, int val, struct ListNode* wanted) {
    struct ListNode* actual = delete (head, val);
    printf("List:\n");
    print_list(head);
    printf("Wanted List:\n");
    print_list(wanted);
    assert_list_equal(wanted, actual);
}

int main() { test(makeList(4, 1, 2, 3, 4), 3, makeList(3, 1, 2, 4)); }