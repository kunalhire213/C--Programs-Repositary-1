/*
   Accept area in square feet and convert it into square meter.
   (1 square feet = 0.0929 square meter) 
   
   input : 5                   
   output : 0.464515  
*/

#include<stdio.h>
double SquareMeter(int iNo)
{
  double feet = 0.0929;
  return iNo * feet;
}
int main()
{
  int iValue = 0;
  double dRet = 0.0;
  printf("Enter area in square feet\n");
  scanf("%d",&iValue);
  
  dRet = SquareMeter(iValue);
  printf("Area is : %.4f sq.meter\n",dRet);
  
  return 0;
}

