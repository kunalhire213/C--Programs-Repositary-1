/*
   Program to print 5 to 1 numbers on screen.
*/

#include<stdio.h>
void Display()
{
  int iCnt = 0;
  for(iCnt=1;iCnt<=5;iCnt++)
  {
    printf("%d\n",iCnt);
  }
}
int main()
{
  
  Display();
  
  return 0;
}
