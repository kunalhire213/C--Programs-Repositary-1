/*
   Accept number from user and display below pattern.
   
   input : 5
   output : 1  *  2  *  3  *  4  *  5  *
*/

#include<stdio.h>
void Pattern(int iNo)
{
  int iCnt = 0;
  for(iCnt = 1;iCnt <= iNo;iCnt++)
  {
    if((iCnt % 2) == 0)
    {
      printf("%d  *\t",iCnt); 
    }
    else
    {
      printf("%d  *\t",iCnt);
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

