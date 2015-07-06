#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <queue>

struct TreeNode
{
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(int x): val(x), left(nullptr), right(nullptr){}
};

class BinaryTree
{
public:
  BinaryTree(TreeNode * root);
  BinaryTree(std::vector<int> vec);
  void InvertTree();
  void Print();
private:
  TreeNode* CreateTreeFromVector(std::vector<int> vec);
  void FindEmptyNode(TreeNode* node, int val); //Recursive search
  void InvertHelper(TreeNode* node);
  void PrintTree(TreeNode* node, int charWidth); //Recursive Print
  TreeNode* m_root;
  int m_treeSize;
};
