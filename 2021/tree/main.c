#include "tree.h"

#include <stdio.h>
#include <stdlib.h>

int main() {
    Tree t = tree_new((Ints) {
            .size = 7,
            .values = (int[]) {1, 2, NA, 3, NA, 4, NA}
    });
    tree_print(t);
    Ints arr = tree_collect_level_order(t, true);
    debug(arr.size);
    for (int i = 0; i < arr.size; ++i) {
        debug(arr.values[i]);
    }
    return 0;
}
