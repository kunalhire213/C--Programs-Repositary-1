/* 
   Accept number of rows and columns from user and display below pattern.
   
   input : iRow = 4 , iCol = 5
   output : 
           5  4  3  2  1
           5  4  3  2  1
           5  4  3  2  1
           5  4  3  2  1
*/

#include<stdio.h>
void DisplayPattern(int iRow , int iCol)
{
  int i = 0 , j = 0;
  for(i=iRow;i>=1;i--)
  {
    for(j=iCol;j>=1;j--)
    {
      printf("%d\t",j);
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
