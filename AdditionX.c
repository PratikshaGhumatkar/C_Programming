#include<stdio.h>
int AdditionTwoNumbers(int iNo1, int iNo2)
{
  int iSum = 0;
  iSum = iNo1 + iNo2;
  return iSum;
}
int main()
{
  int iValue1 = 0, iValue2 = 0, iRet = 0;    //iRet is used for store the ans of addition function

  printf("Enter first Number : \n");
  scanf("%d\n",iValue1);

  printf("Enter second Number : \n");
  scanf("%d\n",iValue2);

  iRet = AdditionTwoNumbers(iValue1,iValue2);

  printf("Addition is : %d\n",iRet);
  
  return 0;
}
