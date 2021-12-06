/* 
   Accept number of rows and columns from user and display below pattern.
   
   input : iRow = 3 , iCol = 4
   output : 
           *  #  *  #  
           *  #  *  #
           *  #  *  #    
*/

#include<stdio.h>
void DisplayPattern(int iRow , int iCol)
{
  int i = 0 , j = 0;
  for(i=1;i<=iRow;i++)
  {
    for(j=1;j<=iCol;j++)
    {
      if((j % 2) == 0)
      {
        printf("#\t");
      }
      else
      {
        printf("*\t");
      }
    }
    printf("\n");
  }
}
int main()
{
  int iValue1 = 0 , iValue2 = 0;
  printf("Enter Number of Rows and Columns\n");
  scanf("%d %d",&iValue1 , &iValue2);
  
  DisplayPattern(iValue1,iValue2);
  
  return 0;
}        
