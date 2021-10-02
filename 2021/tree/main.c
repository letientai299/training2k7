#include "tree.h"

#include <stdio.h>
#include <stdlib.h>

int main() {
    Tree t = tree_new(5, (int[]) {1, NA, 3, 4, 5});
    tree_print(t);
    return 0;
}
