//////////////////////////////////////////////////////////////////////////////////
// Accept number from user and return difference between summation of all its 
// factors and Non-factors.
//
// input : 12                    input : 10
// output : -34  (16 - 50)       output : 37  (8 - 37)
////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
int FactDiff(int iNo)
{
  int iCnt = 0 , iSum1 = 0 , iSum2 = 0;
  
  if(iNo < 0)        // input updater
  {
    iNo = -iNo;
  }
  
  for(iCnt=1;iCnt<iNo;iCnt++)
  {
    if((iNo % iCnt) == 0)
    {
      iSum1 = iSum1 + iCnt;
    }
    else if((iNo % iCnt) >= 1)
    {
      iSum2 = iSum2 + iCnt;
    }
  }
  return iSum1 - iSum2;     // difference return
}
int main()
{
  int iValue = 0 , iRet = 0;
  printf("Enter number\n");
  scanf("%d",&iValue);
  
  iRet = FactDiff(iValue);
  printf("%d\n",iRet);
  return 0;
}

