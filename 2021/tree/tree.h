#include <limits.h>
#include <stdlib.h>
#include <stdbool.h>

#define NA INT_MIN
#define debug(x) printf("%s:%d " #x " = %d\n", __FILE__, __LINE__, (x))

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

typedef struct TreeNode *Tree;

typedef struct Ints_ {
    int size;
    int *values;
} Ints;

/**
 * Create a tree from given array of values.
 *
 * Example:
 *
 * - tree_create(3, (int[]){1, 2, 3}) should create following tree:
 *
 *               1
 *              / \
 *             2   3
 *
 * - tree_create(3, (int[]){1, NA, 2, NA, 3}) should create following tree:
 *
 *               1
 *              / \
 *            NA   2
 *                / \
 *               NA  3
 *
 *   NA here means not-a-number, indicate that the node is not exist.
 *
 * @param count length of values
 * @param values tree nodes values seen in level order traversal, with some
 * special NA values to indicate NULL node.
 */
Tree tree_new(Ints arr);

/**
 * Shortcut to create a new TreeNode
 * @param val value of the node
 */
Tree tree_node_new(int val);

Ints tree_collect_level_order(Tree root, bool withNA);

char *tree_str(Tree root);

void tree_print(Tree root);

int *tree_travel(Tree root);
