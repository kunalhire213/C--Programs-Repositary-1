/*
   Accept distance in kilometre and convert it into meter.
   
   input : 5         input : 12          
   output : 5000     output : 12000
*/

#include<stdio.h>
int KMtoMeter(int iNo)
{
  int Convert = 0;
  Convert = iNo * 1000;
  return Convert;  
}
int main()
{
  int iValue = 0 , iRet = 0;
  printf("Enter Distance\n");
  scanf("%d",&iValue);
  
  iRet = KMtoMeter(iValue);
  printf("Distance is : %d meter\n",iRet);
  
  return 0;
}

