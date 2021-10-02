#include "tree.h"

#include <stdio.h>
#include <stdlib.h>

int main() {
    Tree t = tree_new((Ints) {
            .size = 9,
            .values = (int[]) {1, 2, NA, 3, NA, 4, NA, 5, 6}
    });
    tree_print(t);
    Ints arr = tree_collect_level_order(t, true);
    for (int i = 0; i < arr.size; ++i) {
        debug(arr.values[i]);
    }
    printf("%s\n", tree_str(t));
    return 0;
}
