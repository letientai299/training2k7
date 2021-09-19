#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
  int val;
  struct TreeNode* left;
  struct TreeNode* right;
};

struct TreeNode* createDummyTree()
{
  /*
   *
   *             1               : root
   *           /  \
   *         2     3
   *       /  \
   *      4    5
   */
  struct TreeNode* root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
  root->val = 1;

  root->left = (struct TreeNode*)malloc(sizeof(struct TreeNode));
  root->left->val = 2;

  root->right = (struct TreeNode*)malloc(sizeof(struct TreeNode));
  root->right->val = 3;

  root->right->left = (struct TreeNode*)malloc(sizeof(struct TreeNode));
  root->right->left->val = 4;

  root->right->right = (struct TreeNode*)malloc(sizeof(struct TreeNode));
  root->right->right->val = 5;

  return root;
}

void inorder(struct TreeNode* root)
{
  if (root == NULL) {
    return;
  }
  inorder(root->left);
  printf("%d\n", root->val);
  inorder(root->right);
}

void preorder(struct TreeNode* root)
{
  if (root == NULL) {
    return;
  }
  printf("%d\n", root->val);
  preorder(root->left);
  preorder(root->right);
}

void postorder(struct TreeNode* root)
{
  if (root == NULL) {
    return;
  }
  postorder(root->left);
  postorder(root->right);
  printf("%d\n", root->val);
}

void level_order(struct TreeNode* root)
{
  if (root == NULL) {
    return;
  }

  struct TreeNode** queue = (struct TreeNode**)malloc(sizeof(struct TreeNode*));
  queue[0] = root; // level 1
  int queue_size = 1;

  while (queue_size > 0) {
    struct TreeNode** next_level
        = (struct TreeNode**)malloc(queue_size * 2 * sizeof(struct TreeNode*));
    int next_size = 0;

    for (int i = 0; i < queue_size; i++) {
      struct TreeNode* node = queue[i];
      printf("%d\n", node->val);

      if (node->left) {
        next_level[next_size++] = node->left;
      }

      if (node->right) {
        next_level[next_size++] = node->right;
      }
    }

    free(queue);
    queue = next_level;
    queue_size = next_size;
  }

  free(queue);
}

int main()
{
  struct TreeNode* root = createDummyTree();
  printf("pre-order: \n");
  preorder(root); // 1 2 3 4 5
  printf("in-order: \n");
  inorder(root); // 2 1 4 3 5
  printf("post-order: \n");
  postorder(root); // 2 4 5 3 1

  printf("level-order: \n");
  level_order(root); // 1 2 3 4 5
}
