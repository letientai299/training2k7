#pragma once

#include "./linked-list.h"

void test_insert_before(
    int target, struct ListNode* head, int val, struct ListNode* wanted)
{
    struct ListNode* actual = insert_before(target, head, val);
    assert_list_equal(wanted, actual);
}

void run_test_insert_before()
{
    test_insert_before(                //
        1,                             //
        make_list(5, 1, 2, 3, 4, 5),   //
        0,                             //
        make_list(6, 0, 1, 2, 3, 4, 5) //
    );

    test_insert_before(                //
        4,                             //
        make_list(5, 1, 2, 3, 4, 5),   //
        0,                             //
        make_list(6, 1, 2, 3, 0, 4, 5) //
    );

    test_insert_before(                //
        5,                             //
        make_list(5, 1, 2, 3, 4, 5),   //
        0,                             //
        make_list(6, 1, 2, 3, 4, 0, 5) //
    );

    test_insert_before(              //
        100,                         //
        make_list(5, 1, 2, 3, 4, 5), //
        0,                           //
        make_list(5, 1, 2, 3, 4, 5)  //
    );
}
