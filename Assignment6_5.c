///////////////////////////////////////////////////////////////////
// Accept number from user and return the difference between summation of even digits 
// and summation of odd digits.
// input : 2395             input : 1018            input : 8440
// output : -15 (2 - 17)    output : 6 (8 - 2)      output : 16
///////////////////////////////////////////////////////


#include<stdio.h>
int CountDiff(int iNo)
{
  int iDigit = 0 , iSum1 = 0 , iSum2 = 0;
  if(iNo < 0)
  {
    iNo = -iNo;
  }
  while(iNo != 0)
  {
    iDigit = iNo % 10;
    if((iDigit % 2) == 0)
    {
      iSum1 = iSum1 + iDigit;
    }
    else
    {
      iSum2 = iSum2 + iDigit;
    }
    iNo = iNo / 10;
  }
  return iSum1 - iSum2;
}
int main()
{
  int iValue = 0 , iRet = 0;
  printf("Enter Number\n");
  scanf("%d",&iValue);
  
  iRet = CountDiff(iValue);
  
  printf("%d\n",iRet);
  
  return 0;
}

