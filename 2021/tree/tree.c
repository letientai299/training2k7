#include "tree.h"
#include <stdio.h>

#define debug(x) printf("%s:%d " #x " = %d\n", __FILE__, __LINE__, (x))

void tree_print_recursive(Tree root) {
    if (root) {
        printf("%d ", root->val);
        tree_print_recursive(root->left);
        tree_print_recursive(root->right);
    }
}

void tree_print(Tree root) {
    tree_print_recursive(root);
    printf("\b\n");
}

Tree tree_node_new(int val) {
    if (val == NA) {
        return NULL;
    }

    Tree node = (Tree) calloc(1, sizeof(struct TreeNode));
    node->val = val;
    return node;
}

Tree tree_new(int count, int *values) {
    if (count == 0 || values == NULL) {
        return NULL;
    }

    Tree root = tree_node_new(values[0]);

    Tree *queue = (Tree *) calloc(count, sizeof(Tree));
    queue[0] = root;
    int qi = 0;
    int end = 1;

    for (int i = 1; i < count;) {
        Tree node = queue[qi++];

        node->left = tree_node_new(values[i++]);
        if (node->left) {
            queue[end++] = node->left;
        }

        if (i >= count) {
            break;
        }

        node->right = tree_node_new(values[i++]);
        if (node->right) {
            queue[end++] = node->right;
        }
    }

    return root;
}

