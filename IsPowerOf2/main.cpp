#include <stdio.h>

bool isPowerOfTwo(int n) {
  bool encountered1 = false;
  if(n == 0)
    return false;

  while( n != 0)
  {
      int lowBit = n & 0x1;
      n = n >> 0x1;
      if(encountered1 && lowBit == 1)
        return false;
      if(lowBit == 1)
        encountered1 = true;
  }
  return true;
}

int main()
{
  int userIn;
  printf("Enter your number. Output will show if it's a power of 2 or not:\n>");
  scanf("%d", &userIn);
  bool isPower = isPowerOfTwo(userIn);
  if(isPower)
    printf("Of course that number is a power of 2!");
  else
    printf("That number definitely isn't a power of 2");
}
