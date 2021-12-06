/*
   Accept range from user and display all the numbers in between that range
   in Reverse order.
     11  12  13  
   input : 10  18
   output : 18  17  16  15  14  13  12  11  10
   
   input : -5  2
   output : 2  1  0  -1  -2  -3  -4  -5
*/

#include<stdio.h>
void RangeDisplay(int iStart , int iEnd)
{
  int iCnt = 0;
  if(iStart > iEnd)
  {
    printf("Invalid Range\n");
  }
  
  for(iCnt = iEnd; iCnt >= iStart; iCnt--)
  {
    printf("%d\t",iCnt);
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
  
  RangeDisplay(iValue1,iValue2);
  
  return 0;
}
