//////////////////////////////////////////////////////////////////////////////////////////////////
// Accept number from user and display its digits in reverse order.
//
// input : 2395               input : 9000
// output : 5 9 2 3           output : 0 0 0 9
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void RevDigit(int iNo)
{
  int iDigit = 0;
  if(iNo < 0)       // input updater
  {
    iNo = -iNo;
  }
  
  while(iNo != 0)
  {
    iDigit = iNo % 10; 
    printf("%d\n",iDigit);
    iNo = iNo / 10;
  }
}
int main()
{
  int iValue = 0;
  printf("enter number\n");
  scanf("%d",&iValue);
  
  RevDigit(iValue);
  
  return 0;
}
