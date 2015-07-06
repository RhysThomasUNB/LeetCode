#include "KthSmallest.h"

int main()
{
  TreeNode * root = new TreeNode(5);
  TreeNode * oneLeft = new TreeNode(3);
  TreeNode * oneRight = new TreeNode(8);
  TreeNode * twoLRight = new TreeNode(4);
  TreeNode * twoLLeft = new TreeNode(2);

  root->left = oneLeft;
  root->right = oneRight;
  oneLeft->left = twoLLeft;
  oneLeft->right = twoLRight;

  KthSmallest * myObj = new KthSmallest();
  int result = myObj->FindKthSmallest(root, 2);
  printf("RESULT: %d", result);
  return 0;
}
