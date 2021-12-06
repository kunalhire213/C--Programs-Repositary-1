//////////////////////////////////////////////////////////////////////////////////////
// Accept number from user and check wheather it contains 0 in it or not.
//
// input : 2395                            input : 1001
// output : There is no zero               output : it contains zero
//
////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkZero(int iNo)
{
  int iCnt = 0 , iDigit = 0;
  if(iNo < 0)
  {
    iNo = -iNo;
  }
  
  while(iNo != 0)
  {
    iDigit = iNo % 10;
    if(iDigit == 0)
    {
      return TRUE;
    }
    iNo = iNo / 10;
  }
}
int main()
{
  int iValue = 0;
  BOOL bret = FALSE;
  
  printf("Enter Number\n");
  scanf("%d",&iValue);
  
  bret = ChkZero(iValue);
  if(bret == TRUE)
  {
    printf("It contains zero\n");
  }
  else
  {
    printf("There is no zero\n");
  }
  return 0;
}
