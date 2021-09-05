#ifndef __LIST__
#define __LIST__

#include <stdarg.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* make_list(int n, ...)
{
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

void print_list(struct ListNode* head)
{
    if (head == NULL) {
        printf("\n");
        return;
    }
    while (head != NULL) {
        printf("%d%s", head->val, head->next != NULL ? "->" : "");
        head = head->next;
    }
}

bool assert_list_equal(struct ListNode* wanted, struct ListNode* actual)
{
    struct ListNode* a = actual;
    struct ListNode* w = wanted;
    while (a != NULL && w != NULL) {
        if (a->val != w->val) {
            printf("[ERROR] wanted val=%d, actual=%d\n", w->val, a->val);
            printf("[ERROR] actual: ");
            print_list(actual);
            printf("\n");
            printf("[ERROR] wanted: ");
            print_list(wanted);
            printf("\n");
            return false;
        }
        w = w->next;
        a = a->next;
    }

    if (a != NULL || w != NULL) {
        printf("[ERROR] 2 lists have different size\n");
        printf("[ERROR] actual: ");
        print_list(actual);
        printf("\n");
        printf("[ERROR] wanted: ");
        print_list(wanted);
        printf("\n");
        return false;
    }

    return true;
}

struct ListNode* search_list(struct ListNode* head, int val)
{
    struct ListNode* node = head;
    while (node != NULL) {
        if (node->val == val) {
            return node;
        }

        node = node->next;
    }

    return node; // node == NULL
}

struct ListNode* delete (struct ListNode* head, int val)
{
    struct ListNode* parent = malloc(sizeof(struct ListNode));
    parent->next = head;
    struct ListNode* run = parent;
    while (run->next != NULL) {
        if (run->next->val != val) {
            run = run->next;
        } else {
            run->next = run->next->next;
        }
    }

    head = parent->next;
    free(parent);
    return head;
}

struct ListNode* insert_before(int target, struct ListNode* head, int newVal)
{
    struct ListNode* parent = (struct ListNode*)malloc(sizeof(struct ListNode));
    parent->next = head;
    struct ListNode* prev = parent;
    struct ListNode* run = head;

    while (run != NULL) {
        if (run->val != target) {
            prev = run;
            run = run->next;
            continue;
        }

        struct ListNode* tmp
            = (struct ListNode*)malloc(sizeof(struct ListNode));
        tmp->val = newVal;
        tmp->next = run;
        prev->next = tmp;
        break;
    }

    head = parent->next;
    free(parent);
    return head;
}

struct ListNode* insert_after(int target, struct ListNode* head, int newVal)
{
    struct ListNode* runner = head;
    while (runner != NULL) {
        if (runner->val != target) {
            runner = runner->next;
            continue;
        }

        struct ListNode* tmp
            = (struct ListNode*)malloc(sizeof(struct ListNode));
        tmp->val = newVal;
        tmp->next = runner->next;
        runner->next = tmp;
        break;
    }

    return head;
}

#endif
