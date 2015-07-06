#include "MinStack.h"

int main()
{
  MinStack * myStack = new MinStack();
  myStack->push(5);
  myStack->push(2);
  myStack->push(6);
  myStack->push(10);
  myStack->push(-1);
  myStack->PrintQueue();
  myStack->PrintStack();
  printf("Popping !\n");
  myStack->pop();
  myStack->PrintQueue();
  myStack->PrintStack();
  return 0;
}
