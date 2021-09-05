#pragma once

#include "./linked-list.h"

void test_insert_after(
    int target, struct ListNode* head, int val, struct ListNode* wanted)
{
    struct ListNode* actual = insert_after(target, head, val);
    assert_list_equal(wanted, actual);
}

void run_test_insert_after()
{
    test_insert_after(                //
        1,                             //
        make_list(5, 1, 2, 3, 4, 5),   //
        0,                             //
        make_list(6, 1, 0, 2, 3, 4, 5) //
    );

    test_insert_after(                //
        4,                             //
        make_list(5, 1, 2, 3, 4, 5),   //
        0,                             //
        make_list(6, 1, 2, 3, 4, 0, 5) //
    );

    test_insert_after(                //
        5,                             //
        make_list(5, 1, 2, 3, 4, 5),   //
        0,                             //
        make_list(6, 1, 2, 3, 4, 5, 0) //
    );

    test_insert_after(              //
        100,                         //
        make_list(5, 1, 2, 3, 4, 5), //
        0,                           //
        make_list(5, 1, 2, 3, 4, 5)  //
    );
}
