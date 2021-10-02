#include "tree.h"
#include <stdio.h>
#include <strings.h>

#define DEFAULT_CAPACITY 1

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

Tree tree_new(Ints arr) {
    int count = arr.size;
    int *values = arr.values;

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
        if (!node) {
            continue;
        }

        node->left = tree_node_new(values[i++]);
        queue[end++] = node->left;

        if (i >= count) {
            break;
        }

        node->right = tree_node_new(values[i++]);
        queue[end++] = node->right;
    }

    free(queue);
    return root;
}

Ints tree_collect_level_order(Tree root, bool withNA) {
    Ints arr = {};
    if (!root) {
        return arr;
    }

    int capacity = DEFAULT_CAPACITY;
    arr.values = (int *) calloc(capacity, sizeof(int));
    Tree *queue = (Tree *) calloc(capacity, sizeof(Tree));

    queue[0] = root;
    int end = 1;

    for (int i = 0; i < end; i++) {
        if (end >= capacity) {
            capacity = capacity * 2 + 1;
            arr.values = (int *) reallocf(arr.values, capacity * sizeof(int));
            queue = (Tree *) reallocf(queue, capacity * sizeof(Tree));
        }

        Tree node = queue[i];
        if (!node) {
            if (withNA) {
                arr.values[arr.size++] = NA;
            }
            continue;
        }

        arr.values[arr.size++] = node->val;
        queue[end++] = node->left;
        queue[end++] = node->right;
    }

    arr.values = (int *) realloc(arr.values, arr.size * sizeof(int));

    free(queue);
    return arr;
}

char *tree_str(Tree root) {
    return "";
}



