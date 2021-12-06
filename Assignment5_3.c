//////////////////////////////////////////////////////////////////////////////////////
// Accept number from user and count frequency of 2 in it.
//
// input : 2395          input : 1018         input : 922432
// output : 1            output : 0           output : 3
//
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int CountTwo(int iNo)
{
  int iCnt = 0 , iDigit = 0;
  if(iNo < 0)
  {
    iNo = -iNo;
  }
  while(iNo != 0)
  {
    iDigit = iNo % 10;
    if(iDigit == 2)
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
  
  iRet = CountTwo(iValue);
  
  printf("%d\n",iRet);
  
  return 0;
}

