#include "InvertBinaryTree.h"

BinaryTree::BinaryTree(TreeNode* root)
{
  m_root = root;
}

BinaryTree::BinaryTree(std::vector<int> vec)
{
  m_root = CreateTreeFromVector(vec);
  m_treeSize = vec.size();
}

TreeNode* BinaryTree::CreateTreeFromVector(std::vector<int> vec)
{
  TreeNode* root = new TreeNode(vec.at(0));
  //std::sort(vec.begin(), vec.end());
  for(int i = 1; i < vec.size(); i++)
    FindEmptyNode(root, vec.at(i));

  return root;
}
void BinaryTree::FindEmptyNode(TreeNode* node, int val)
{
  if(val <= node->val)
  {
    if(node->left == nullptr)
    {
      node->left = new TreeNode(val);
    }
    else
      FindEmptyNode(node->left, val);
  }
  else
  {
    if(node->right == nullptr)
      node->right = new TreeNode(val);
    else
      FindEmptyNode(node->right, val);
  }
}

void BinaryTree::InvertTree()
{
  InvertHelper(m_root);
}

void BinaryTree::InvertHelper(TreeNode* node)
{
  if(node == nullptr)
    return;
  if(node->left != nullptr && node->right != nullptr)
  {
    TreeNode * tempNode = node->left;
    node->left = node->right;
    node->right = tempNode;

    InvertHelper(node->left);
    InvertHelper(node->right);
  }
  else if(node->left != nullptr)
  {
    node->right = node->left;
    node->left = nullptr;
    InvertHelper(node->right);
  }
  else if(node->right != nullptr)
  {
    node->left = node->right;
    node->right = nullptr;
    InvertHelper(node->left);
  }

}
void BinaryTree::Print()
{
  PrintTree(m_root, 10);
  printf("\n\n\n");
}
void BinaryTree::PrintTree(TreeNode* p, int indent)
{
  //Formatting found from StackOverflow
  if(p != NULL) {
    if(p->right)
      PrintTree(p->right, indent+4);

    if (indent)
      std::cout << std::setw(indent) << ' ';

    if (p->right)
      std::cout<<" /\n" << std::setw(indent) << ' ';
      
    std::cout<< p->val << "\n ";
    if(p->left) {
        std::cout << std::setw(indent) << ' ' <<" \\\n";
        PrintTree(p->left, indent+4);
    }
  }
}
