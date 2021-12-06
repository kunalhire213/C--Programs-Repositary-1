/*
   Accept number from user and display below pattern.
   
   input : 5
   output : 5  #  4  #  3  #  2  #  1  #
*/

#include<stdio.h>
void Pattern(int iNo)
{
  int iCnt = 0;
  for(iCnt = iNo;iCnt >= 1;iCnt--)
  {
    if((iCnt % 2) == 0)
    {
      printf("%d  #\t",iCnt); 
    }
    else
    {
      printf("%d  #\t",iCnt);
    }
  }
  printf("\n");
}
int main()
{
  int iValue = 0;
  printf("Enter Number\n");
  scanf("%d",&iValue);
  
  Pattern(iValue);
  
  return 0;
}

