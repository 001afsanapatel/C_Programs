#include <stdio.h>
#include <conio.h>
int main()
{
    char ch='0';
    printf("\n enter a character to check whether,\n (it is upper case or lower caseor digit or special symbol");
    ch=getche();
    
    if((ch>='A') && (ch<='Z'))
    {
  printf("\n\n given character is upper case");  
    }
    else if((ch>='a') && (ch<='b'))
    {
  printf("\n\n given character is lower case");
    }
    else if((ch>='0') && (ch<='9'))
    {
  printf("\n\n given character is digit");
    }
    else
    {
    printf("\n\n given character is special symbol");
    }
    
  getch();
    return 0;
    }













