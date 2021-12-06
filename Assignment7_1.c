/*
   Accept Radius from user and calculate its area.
   
   input : 5.3              input : 10.4 
   output : 88.2026         output : 339.6224
*/

#include<stdio.h>
double CircleArea(float fRadius)
{
  float PI = 3.14;
  return PI * fRadius * fRadius;
}
int main()
{
  float fValue = 0.0;
  double dRet = 0.0;
  
  printf("Enter Radius\n");
  scanf("%f",&fValue);
  
  dRet = CircleArea(fValue);
  printf("Area is : %.4f\n" , dRet);
  
  return 0;
}

