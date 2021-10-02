#include <limits.h>
#include <stdlib.h>

#define NA INT_MIN

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

typedef struct TreeNode *Tree;

/**
 * Create a tree from given array of values.
 *
 * Input:
 * - count: len of array.
 * - values: tree nodes values seen in level order traversal.
 *
 * Example:
 * - tree_create(3, (int[]){1, 2, 3}) should create following tree:
 *               1
 *              / \
 *             2   3
 * - tree_create(3, (int[]){1, NA, 2, NA, 3}) should create following tree:
 *               1
 *              / \
 *            NA   2
 *                / \
 *               NA  3
 *   NA here means not-a-number, indicate that the node is not exist.
 */
Tree tree_new(int count, int *values);

Tree tree_node_new(int val);

void tree_print(Tree root);

void tree_travel();
