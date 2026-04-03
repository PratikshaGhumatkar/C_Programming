#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
  int iRem = 0;
  iRem = iNo % 2;

  if(iRem == 0)
  {
    return 0;
  }
  else
  {
    return -1;
  }
}
