#include <vector>
#include <stdio.h>

class MinStack {
public:
  std::vector<int> m_stack;
  std::vector<int> m_minQueue;
  MinStack();
  void push(int x);
  void pop();
  int top();
  int getMin();
  void PrintQueue();
  void PrintStack();
private:
  int FindIndex(int val, int low, int high);
};
