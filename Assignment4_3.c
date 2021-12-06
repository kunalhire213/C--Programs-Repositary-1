////////////////////////////////////////////////////////////////////////////////////////
// Accept number from user and display all its non factors.
//
// input : 12
// output : 5 7 8 9 10 11
/////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void NonFact(int iNo)
{
  int iCnt = 0;
  
  if(iNo < 0)        // input updater
  {
    iNo = -iNo;
  }
  
  for(iCnt=1;iCnt<iNo;iCnt++)
  {
    if((iNo % iCnt) >= 1)
    {
      printf("%d\t",iCnt);
    }
  }
  printf("\n");
}
int main()
{
  int iValue = 0;
  printf("Enter number\n");
  scanf("%d",&iValue);
  
  NonFact(iValue);
  
  return 0;
}
