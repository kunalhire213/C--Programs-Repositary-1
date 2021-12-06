///////////////////////////////////////////////////////////////////
// Accept number from user and return the multiplication of all digits.
//
// input : 2395    input : 1018     input : 9440
// output : 270    output : 8       output : 144
///////////////////////////////////////////////////////


#include<stdio.h>
int MultDigits(int iNo)
{
  int iDigit = 0 , iMult = 1;
  if(iNo < 0)
  {
    iNo = -iNo;
  }
  while(iNo != 0)
  {
    iDigit = iNo % 10;
    if(iDigit == 0)
    {
      iDigit = 1;
    }
    iMult = iMult * iDigit;
    iNo = iNo / 10;
  }
  return iMult;
}
int main()
{
  int iValue = 0 , iRet = 0;
  printf("Enter Number\n");
  scanf("%d",&iValue);
  
  iRet = MultDigits(iValue);
  
  printf("%d\n",iRet);
  
  return 0;
}

