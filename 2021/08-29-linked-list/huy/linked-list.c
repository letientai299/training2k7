#include "linked-list.h"
#include <stdio.h>
#include <stdlib.h>

struct ListNode* insert_after(int target, struct ListNode* head, int newVal)
{
    if (head == NULL) {
        return NULL;
    }
    struct ListNode* node = head;
    while (head != NULL) {
        if (head->val == target) {
            struct ListNode* tmp = malloc(sizeof(struct ListNode));
            tmp->val = newVal;
            tmp->next = head->next;
            head->next = tmp;
            break;
        }
        head = head->next;
    }
    return node;
}

struct ListNode* insert_before(int target, struct ListNode* head, int newVal)
{
    if (head == NULL) {
        return NULL;
    }
    if (head->val == target) {
        struct ListNode* tmp = malloc(sizeof(struct ListNode));
        tmp->val = newVal;
        tmp->next = head;
        return tmp;
    }
    struct ListNode* prev = head;
    struct ListNode* node = head;
    head = head->next;
    while (head != NULL) {
        if (head->val == target) {
            struct ListNode* tmp = malloc(sizeof(struct ListNode));
            tmp->val = newVal;
            prev->next = tmp;
            prev->next->next = head;
            break;
        }
        head = head->next;
        prev = prev->next;
    }
    return node;
}

struct ListNode* delete (struct ListNode* head, int val)
{
    if (head == NULL) {
        return NULL;
    }
    struct ListNode* node = head;
    if (head->val == val) {
        return head->next;
    }
    head = head->next;
    while (head != NULL) {
        if (head->val == val) {
            struct ListNode* tmp = head;
            head->val = head->next->val;
            head->next = tmp->next->next;
            break;
        }
        head = head->next;
    }
    return node;
}

int main()
{
    struct ListNode* head = makeList(5, 1, 2, 3, 4, 5);
    head = insert_before(1, head, 0);
    head = insert_after(5, head, 12);
    head = delete (head, 5);
    print_list(head);
    return 0;
}
