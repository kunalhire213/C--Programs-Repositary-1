///////////////////////////////////////////////////////////////////
// Accept number from user and return the count of odd digits.
//
// input : 2359    input : 1018
// output : 3      output : 2
///////////////////////////////////////////////////////


#include<stdio.h>
int CountOdd(int iNo)
{
  int iCnt = 0 , iDigit = 0;
  if(iNo < 0)
  {
    iNo = -iNo;
  }
  while(iNo != 0)
  {
    iDigit = iNo % 10;
    if((iDigit % 2) >= 1)
    {
      iCnt++;
    }
    iNo = iNo / 10;
  }
  return iCnt;
}
int main()
{
  int iValue = 0 , iRet = 0;
  printf("Enter Number\n");
  scanf("%d",&iValue);
  
  iRet = CountOdd(iValue);
  
  printf("%d\n",iRet);
  
  return 0;
}

