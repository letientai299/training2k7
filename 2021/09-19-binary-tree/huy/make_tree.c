#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

const int oo = INT_MAX;

struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

int count = 0;

struct TreeNode *make_tree(int *arr)
{
    struct TreeNode *tree;
    if (arr[count] == oo)
    {
        count++;
        return NULL;
    }
    tree = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    tree->val = arr[count++];
    tree->left = make_tree(arr);
    tree->right = make_tree(arr);
    return tree;
}

void print_tree(struct TreeNode *tree)
{
    if (tree)
    {
        printf("%d ", tree->val);
        print_tree(tree->left);
        print_tree(tree->right);
    }
}

void test(struct TreeNode *tree)
{
    count = 0;
    print_tree(tree);
    printf("\n");
}

int main()
{
    test(make_tree((int[]){1, 2, 3, oo, oo, oo, 4, oo, oo, 5, oo, oo})); // // wanted tree after print = 1 2 3 4 5
    /* Binary tree :
                1
             /     \
            2       3
          /   \   /   \
         4  NULL NULL  5
       /   \         /   \
     NULL  NULL    NULL  NULL
    */

    test(make_tree((int[]){1, oo, 4, 5, oo, 6, oo, oo, oo})); // wanted tree after print = 1 4 5 6
    /* Binary tree :
                1
              /   \
            NULL   4
                 /   \
                5    NULL
              /   \
           NULL    6
                 /   \
               NULL  NULL
        */

    test(make_tree((int[]){oo})); // // wanted tree after print = NULL
    /* Binary tree :
               NULL
    */
    return 0;
}