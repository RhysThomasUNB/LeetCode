#include "KthSmallest.h"

KthSmallest::KthSmallest()
{
  m_sortedList.clear();
}
int KthSmallest::FindKthSmallest(TreeNode* root, int k) {
    DepthSort(root);
    return m_sortedList.at(k-1);
}

void KthSmallest::DepthSort(TreeNode* root)
{
    if(root->left)
      DepthSort(root->left);
     m_sortedList.push_back(root->val);
     if(root->right)
       DepthSort(root->right);
}
