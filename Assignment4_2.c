////////////////////////////////////////////////////////////////////////////////////////////
// Accept number from user and display its Factors in decreasing order.
//
// input : 12
// output : 6 4 3 2 1
//
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void FactRev(int iNo)
{
  int iCnt = 0 , iMult = 1; 
  if(iNo < 0)
  {
    iNo = -iNo;
  }
  
  for(iCnt = iNo-1;iCnt > 0; iCnt--)
  {
    if((iNo % iCnt) == 0)
    {
      printf("%d\t",iCnt);
    }
  }
  printf("\n");
}
int main()
{
  int iValue = 0;
  printf("Enter Number\n");
  scanf("%d",&iValue);
  
  FactRev(iValue);
  
  return 0;
}
