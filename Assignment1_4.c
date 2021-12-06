/*
   Accept one number from user and check wheather number is divisible by 5 or not.
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int iNo)
{
  if((iNo % 5) == 0)
  {
    return TRUE;
  }
  else
  {
    return FALSE;
  }  
}
int main()
{
  int iValue = 0;
  BOOL bRet = FALSE;
  
  printf("Enter Number\n");
  scanf("%d",&iValue);
 
  bRet = Check(iValue);
  if(bRet == TRUE)
  {
    printf("Number is divisible by 5\n");
  }
  else
  {
    printf("Number is Not divisible by 5\n");
  } 
  return 0;
}









