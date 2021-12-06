/////////////////////////////////////////////////////////////////////////////////////
// Accept one character from user and check wheather that character is vowel 
// (a,e,i,o,u) or not.
//
// input : e   output : TRUE
// input : d   output : FALSE
////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL checkVowel(char CH)
{
  if((CH=='a')||(CH=='e')||(CH=='i')||(CH=='o')||(CH=='u'))
  {
    return TRUE;
  }
  else if((CH=='A')||(CH=='E')||(CH=='I')||(CH=='O')||(CH=='U'))
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
  char cValue = '\0';
  BOOL bret = FALSE;
  
  printf("Enter Character\n");
  scanf("%c",&cValue);
  
  bret = checkVowel(cValue);
  if(bret == TRUE)
  {
    printf("it is vowel\n");
  }
  else
  {
    printf("it is not vowel\n");
  }
  
  return 0;
}

    
    
    
    
    
     
      
