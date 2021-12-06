/////////////////////////////////////////////////////////////
// 1) Accept one number from user and print that number of even numbers on srceen.
// 
//  input : 7
//  output : 2 4 6 8 10 12 14
///////////////////////////////////////////////////////////////


#include<stdio.h>
void DisplayEven(int);

int main()
{
  int iValue = 0;
  printf("Enter Number\n");
  scanf("%d",&iValue);
  
  DisplayEven(iValue);
  
  return 0;
}
void DisplayEven(int iNo)
{
  int icnt = 0;
  
  if(iNo <= 0)
  {
    return;
  }
  for(icnt =1;icnt <= iNo*2;icnt++)
  {
    if((icnt % 2) == 0)
    {
      printf("%d\n",icnt);
    }
  }
}





