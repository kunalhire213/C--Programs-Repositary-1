/////////////////////////////////////////////////////////////////////////////////////////////
// Accept number from user and display its multiplication of factors.
//
// input : 12                       // input : 13       // input : 10
// output : 144 (1*2*3*4*6)         // output : 1       // output : 10 (1*2*5)
//
//////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
int MultFactors(int iNo)
{
  int iCnt = 0 , iMult = 1;
  
  if(iNo < 0)
  {
    iNo = -iNo;
  }
  
  for(iCnt=1;iCnt<iNo;iCnt++)
  {
    if((iNo % iCnt) == 0)
    {
      iMult = iMult * iCnt;
    } 
  }
  return iMult; 
}
int main()
{
  int iValue = 0 , iRet = 0;
  printf("Enter Number\n");
  scanf("%d",&iValue);
  
  iRet = MultFactors(iValue);
  printf("%d\n",iRet);
  
  return 0;
}
 
