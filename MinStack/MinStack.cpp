#include "MinStack.h"

MinStack::MinStack()
{
  m_minQueue.clear();
  m_stack.clear();
}

int MinStack::FindIndex(int val, int low, int high)
{
  //printf("Val: %d, Low: %d, High: %d", val, low, high);
  if(low > high)
  {
    return low;
  }
  int mid = (low + high) / 2;
  if(m_minQueue.at(mid) == val)
  {
    return mid;
  }
  if(val < m_minQueue.at(mid))
  {
    return FindIndex(val, low, mid - 1);
  }
  else
  {
    return FindIndex(val, mid + 1, high);
  }

}
void MinStack::push(int x) {
    m_stack.push_back(x);
    //if(x <= (int)m_minQueue.back())
    int count = FindIndex(x, 0, m_minQueue.size() - 1);
    m_minQueue.insert(m_minQueue.begin() + count, x);
}

void MinStack::pop() {
  int val = m_stack.back();
  m_stack.pop_back();
  int indexToErase = FindIndex(val, 0, m_minQueue.size());
  m_minQueue.erase(m_minQueue.begin() + indexToErase);
}

int MinStack::top() {
  return m_stack.back();
}

int MinStack::getMin() {
  return m_minQueue.front();
}

void MinStack::PrintStack()
{
  printf("STACK: \n");
  for(int i = 0; i < m_stack.size(); i++)
  {
    printf("%d, ", m_stack.at(i));
  }
  printf("\n");
}
void MinStack::PrintQueue()
{
  printf("QUEUE: \n");
  for(int i = 0; i < m_minQueue.size(); i++)
  {
    printf("%d, ", m_minQueue.at(i));
  }
  printf("\n");
}
