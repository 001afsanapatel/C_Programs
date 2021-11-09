#include <stdio.h>
#include <conio.h>
int main()
{
    int No=0, temp=0,revno=0;
    printf("enter a positive number to get its reverse number");
    scanf("%d",& No);
    
    temp=No;
    if(No<0)
   { 
     printf("invalid number");
    }
    return -1;
    while(temp>0)
    {
    revno=(revno*10)+(temp%10);
    temp/=10;
    }
    printf("\n reverse of given number is %d==%d",No,revno);
    getch();
    return 0;
    
  }
    
    
    
    
    
    
  