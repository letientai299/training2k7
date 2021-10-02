#include "tree.h"

void test_tree_collect_level_order() {
    Tree a = tree_new((Ints) {
            .size = 9,
            .values = (int[]) {1, 2, NA, 3, NA, 4, NA, 5, 6}
    });

    Ints level_orders = tree_collect_level_order(a, true);
    Tree b = tree_new(level_orders);
    assert_tree_equal(a, b);
}

int main() {
    test_tree_collect_level_order();
    return 0;
}
