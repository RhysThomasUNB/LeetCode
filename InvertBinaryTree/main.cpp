#include "InvertBinaryTree.h"

int main()
{
  int userVal = 0;
  printf("Enter any integers you want in your tree\n>");
  std::vector<int> userVec;
  while(scanf("%d", &userVal))
    userVec.push_back(userVal);
  BinaryTree* userTree = new BinaryTree(userVec);
  userTree->Print();
  userTree->InvertTree();
  userTree->Print();
  return 0;
}
