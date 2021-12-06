/*
   Accept width and height of rectangle from user and calculate its area.
   
   input : 5.3 and 9.78              
   output : 51.834     
*/

#include<stdio.h>
double RectArea(float fWidth , float fHeight)
{
   double Area = 0.0;
   Area = fWidth * fHeight;
   return Area; 
}
int main()
{
  float fValue1 = 0.0 , fValue2 = 0.0;
  double dRet = 0.0;
  
  printf("Enter Width\n");
  scanf("%f",&fValue1);
  printf("Enter Height\n");
  scanf("%f",&fValue2);
  
  dRet = RectArea(fValue1,fValue2);
  printf("Area is : %.4f\n" , dRet);
  
  return 0;
}

