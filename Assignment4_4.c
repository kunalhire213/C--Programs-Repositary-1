//////////////////////////////////////////////////////////////////////////////////
// Accept number from user and return summation of all its non factors.
//
// input : 12        input : 10
// output : 50       output : 37
////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
int SumNonFact(int iNo)
{
  int iCnt = 0 , iSum = 0;
  
  if(iNo < 0)        // input updater
  {
    iNo = -iNo;
  }
  
  for(iCnt=1;iCnt<iNo;iCnt++)
  {
    if((iNo % iCnt) >= 1)
    {
      iSum = iSum + iCnt;
    }
  }
  return iSum;
}
int main()
{
  int iValue = 0 , iRet = 0;
  printf("Enter number\n");
  scanf("%d",&iValue);
  
  iRet = SumNonFact(iValue);
  printf("%d\n",iRet);
  return 0;
}

