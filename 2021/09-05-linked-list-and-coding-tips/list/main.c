#include "delete_test.h"
#include "insert_after_test.h"
#include "insert_before_test.h"
#include "linked-list.h"
#include <stdio.h>
#include <stdlib.h>

// Base on Huy's solution in ../../08-29-linked-list/huy

int main()
{
    run_test_delete();
    run_test_insert_before();
    run_test_insert_after();
    return 0;
}
