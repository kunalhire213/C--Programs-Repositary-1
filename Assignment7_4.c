/*
   Accept temperature in fehrenheit and convert it into celcius.
   (1 celcius = (fehrenheit -32) * (5/9)) 
   
   input : 10                   
   output : -12.2222 (10 - 32) * (5/9)    
*/

#include<stdio.h>
double FhtoCs(int iNo)
{
  float temp1 = 0.0 , temp2 = 0.0 , temp3 = 0.0;
  temp1 = iNo - 32;
  temp2 = temp1 * 5;
  temp3 = temp2 / 9;
  return temp3;
}
int main()
{
  int iValue = 0;
  double dRet = 0.0;
  printf("Enter temperature in fehrenheit\n");
  scanf("%d",&iValue);
  
  dRet = FhtoCs(iValue);
  printf("Temperature is : %f celcius\n",dRet);
  
  return 0;
}

