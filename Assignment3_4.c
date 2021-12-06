/////////////////////////////////////////////////////////////////////////////////////
// Accept one character from user and convert case of that character.
//
// input : a   output : A
// input : D   output : d
////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayConvert(char CH)
{
  if((CH >= 'A')&&(CH <= 'Z'))
  {
    printf("%c\n",CH + 32);
  }
  else if((CH >= 'a')&&(CH <= 'z'))
  {
    printf("%c\n",CH - 32);
  }
}
int main()
{
  char cValue = '\0';
  
  printf("Enter Character\n");
  scanf("%c",&cValue);
  
  DisplayConvert(cValue);
  
  return 0;
}

    
    
    
    
    
     
      
