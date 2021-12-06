/*
   Accept range from user and display Addition of all numbers in between that range.
   (Range should contains positive numbers only).
   
   input : 10  18
   output : 126
   
   input : -5  2
   output : Invalid range
*/

#include<stdio.h>
int RangeSum(int iStart , int iEnd)
{
  int iCnt = 0 , iSum = 0;
  if(iStart < 0)
  {
    return 0;
  }
  if(iStart > iEnd)
  {
    return 0;
  }
  
  for(iCnt = iStart; iCnt <= iEnd; iCnt++)
  {
    iSum = iSum + iCnt;
  }
  return iSum; 
}
int main()
{
  int iValue1 = 0 , iValue2 = 0;
  int iRet = 0;
  
  printf("Enter starting point : \n");
  scanf("%d",&iValue1);
  printf("Enter ending point : \n");
  scanf("%d",&iValue2);
  
  iRet = RangeSum(iValue1,iValue2);
  if(iRet == 0)
  {
    printf("Invalid Range\n");
  }
  else
  {
    printf("Addition is : %d\n",iRet);
  }
  return 0;
}
