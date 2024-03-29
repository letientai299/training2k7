#include "tree.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

#define DEFAULT_CAPACITY 16

Tree tree_node_new(int val)
{
    if (val == NA) {
        return NULL;
    }

    Tree node = (Tree)calloc(1, sizeof(struct TreeNode));
    node->val = val;
    return node;
}

Tree tree_new(Ints arr)
{
    int count = arr.size;
    int* values = arr.values;

    if (count == 0 || values == NULL) {
        return NULL;
    }

    Tree root = tree_node_new(values[0]);

    Tree* queue = (Tree*)calloc(count, sizeof(Tree));
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

Ints tree_collect_level_order(Tree root, bool withNA)
{
    Ints arr = {};
    if (!root) {
        return arr;
    }

    int capacity = DEFAULT_CAPACITY;
    arr.values = (int*)calloc(capacity, sizeof(int));
    Tree* queue = (Tree*)calloc(capacity, sizeof(Tree));

    queue[0] = root;
    int end = 1;

    for (int i = 0; i < end; i++) {
        if (end >= capacity) {
            // make sure that the returning array has enough space to store
            // tree nodes.
            capacity = capacity * 2 + 1;
            arr.values = (int*)realloc(arr.values, capacity * sizeof(int));
            queue = (Tree*)realloc(queue, capacity * sizeof(Tree));
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

    // trim NA values at the end of the array
    while (arr.values[arr.size - 1] == NA) {
        arr.size--;
    }

    // reduce array size
    arr.values = (int*)realloc(arr.values, arr.size * sizeof(int));

    free(queue);
    return arr;
}

char* tree_str(Tree root)
{
    Ints arr = tree_collect_level_order(root, true);
    if (arr.size == 0 || arr.values[0] == NA) {
        // return if the tree is empty
        return "";
    }

    int len = 0;
    for (int i = 0; i < arr.size; ++i) {
        int v = arr.values[i];
        // using snprintf(NULL, 0, ...) to find the required length to print
        len += (v == NA) ? 2 : snprintf(NULL, 0, "%d", v);
        len += 2; // comma and space
    }

    // root node doesn't need comma and space, thus, -2,
    // but, we need 1 byte to terminate the string, thus, +1
    // hence, -1 here.
    len--;
    char* buf = (char*)calloc(len, sizeof(char));

    // print the root node first
    int end = snprintf(buf, len, "%d", arr.values[0]);

    // start from 1, for each node, print a comma and a space before its value
    for (int i = 1; i < arr.size; ++i) {
        int v = arr.values[i];
        if (v == NA) {
            end += snprintf(buf + end, len, ", NA");
        } else {
            end += snprintf(buf + end, len, ", %d", v);
        }
    }

    return buf;
}

void tree_print(Tree root) { printf("%s\n", tree_str(root)); }

void _log(const char* fmt, ...)
{
    va_list args;
    va_start(args, fmt);
    vprintf(fmt, args);
    va_end(args);
    unsigned n = strlen(fmt);
    if (fmt[n - 1] != '\n') {
        printf("\n");
    }
}

bool assert_tree_equal(Tree a, Tree b)
{
    char* a_str = tree_str(a);
    char* b_str = tree_str(b);
    bool equal = strcmp(a_str, b_str) == 0;
    if (!equal) {
        error("Trees are different!\na=%s\nb=%s", a_str, b_str);
    }
    return equal;
}
