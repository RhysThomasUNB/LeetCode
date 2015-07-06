#include <vector>
#include <stdio.h>
//Definition for a binary tree node.
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class KthSmallest {
public:
  KthSmallest();
    std::vector<int> m_sortedList;

    int FindKthSmallest(TreeNode* root, int k);

    void DepthSort(TreeNode* root);
};
