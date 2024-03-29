#include <limits.h>
#include <stdbool.h>
#include <stdlib.h>

#define NA INT_MIN

#define debug(x) \
    printf("\x1b[1;36m[DEBUG]\x1b[0m %s:%d " #x " = %d\n", __FILE__, __LINE__, (x))

#define error(fmt, ...) \
    _log("\x1b[1;31m[ERROR]\x1b[0m %s:%d " fmt, __FILE__, __LINE__, __VA_ARGS__)

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
 * - tree_new(3, (int[]){1, 2, 3}) should create following tree:
 *
 *               1
 *              / \
 *             2   3
 *
 * - tree_new(3, (int[]){1, NA, 2, NA, 3}) should create following tree:
 *
 *               1
 *              / \
 *            NA   2
 *                / \
 *               NA  3
 *
 *   NA here means not-a-number, indicate that the node is not exist.
 *
 * Input:
 * - count: length of values
 * - values: tree nodes values seen in level order traversal, with some special
 *   NA values to indicate NULL node.
 */
Tree tree_new(Ints arr);

/** Shortcut to create a new TreeNode. */
Tree tree_node_new(int val);

/**
 * Collect tree nodes in level order traversal. If withNA is true, this also
 * add NA value to the returned array to make it usable as input for tree_new().
 *
 * Example:
 *
 *               1
 *              / \
 *             2   3
 *
 * - return: [1, 2, 3], no matter what withNA is.
 *
 *               1
 *              / \
 *            NA   2
 *                / \
 *               NA  3
 *
 * - return: [1, 2, 3] if withNA is false
 * - return: [1, NA, 2, NA, 3] if withNA is true.
 */
Ints tree_collect_level_order(Tree root, bool withNA);

/**
 * Return the level order string representation of the tree, which is smiliar to
 * the input of tree_new().
 *
 * Example:
 *               1
 *              / \
 *             2   3
 * - return: "1, 2, 3"
 *
 *               1
 *              / \
 *            NA   2
 *                / \
 *               NA  3
 *
 * - return: "1, NA, 2, NA, 3"
 */
char *tree_str(Tree root);

/** Shortcut to print tree_str(). */
void tree_print(Tree root);

/** Assert that 2 trees are equal */
bool assert_tree_equal(Tree a, Tree b);

void _log(const char *fmt, ...);
