/*
   Accept range from user and display all the numbers in between that range.
   
   input : 10  18
   output : 10  11  12  13  14  15  16  17  18
   
   input : -5  2
   output : -5  -4  -3  -2  -1  0  1  2
*/

#include<stdio.h>
void RangeDisplay(int iStart , int iEnd)
{
  int iCnt = 0;
  if(iStart > iEnd)
  {
    printf("Invalid Range\n");
  }
  
  for(iCnt = iStart; iCnt <= iEnd; iCnt++)
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
