////////////////////////////////////////////////////////////////////////////////////////
// Accept number from user and print factors of that number.
//
// input : 24
// output : 1 2 3 4 6 8 12
//////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
void DisplayFactor(int iNo)
{
  int iCnt = 0;
  
  if(iNo < 0)
  {
    iNo = -iNo;
  }
  
  for(iCnt=1;iCnt<iNo;iCnt++)
  {
    if((iNo % iCnt) == 0)
    {
      printf("%d\n",iCnt);
    }
  }
}
int main()
{
  int iValue = 0;
  printf("Enter number\n");
  scanf("%d",&iValue);
  
  DisplayFactor(iValue);
  
  return 0;
}
