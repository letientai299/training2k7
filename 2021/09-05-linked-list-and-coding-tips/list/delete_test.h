#pragma once

#include "./linked-list.h"

void test_delete(struct ListNode* head, int val, struct ListNode* wanted)
{
    struct ListNode* actual = delete (head, val);
    assert_list_equal(wanted, actual);
}

void run_test_delete()
{
    test_delete(                     //
        make_list(5, 1, 2, 3, 4, 5), //
        1,                           //
        make_list(4, 2, 3, 4, 5)     //
    );

    test_delete(                     //
        make_list(5, 1, 2, 3, 4, 5), //
        2,                           //
        make_list(4, 1, 3, 4, 5)     //
    );

    test_delete(                     //
        make_list(5, 1, 2, 3, 4, 5), //
        3,                           //
        make_list(4, 1, 2, 4, 5)     //
    );

    test_delete(                     //
        make_list(5, 1, 2, 3, 4, 5), //
        5,                           //
        make_list(4, 1, 2, 3, 4)     //
    );
}

