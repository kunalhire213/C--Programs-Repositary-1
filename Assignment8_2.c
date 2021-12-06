/*
   Accept range from user and display all Even numbers in between that range.
   
   input : 10  18
   output : 10    12    14    16    18
   
   input : -5  2
   output : -4   -2    0    2
*/

#include<stdio.h>
void RangeDisplayEven(int iStart , int iEnd)
{
  int iCnt = 0;
  if(iStart > iEnd)
  {
    printf("Invalid Range\n");
  }
  
  for(iCnt = iStart; iCnt <= iEnd; iCnt++)
  {
    if((iCnt % 2) == 0)
    {
      printf("%d\t",iCnt);
    }
  }
  printf("\n"); 
}
int main()
{
  int iValue1 = 0 , iValue2 = 0;
  
  printf("Enter starting point : \n");
  scanf("%d",&iValue1);
  printf("Enter ending point : \n");
  scanf("%d",&iValue2);
  
  RangeDisplayEven(iValue1,iValue2);
  
  return 0;
}
