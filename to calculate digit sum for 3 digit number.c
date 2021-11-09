#include <stdio.h>
#include <conio.h>
int main()
{
    int No=0,dcount=0,Temp=0;
    printf("enter +ve integer number to calculate it's digit count");
    scanf("%d",& No);
    Temp=No;
    
    if(No<0)
    {
    printf("invalid number");
    }
    return -1;
    
   
    while(Temp>0)
    {
        dcount++;
        Temp=Temp/10;
    }
    printf("\n count of digits of given number %d==%d",No,dcount);
    
    getch();
    return 0;
 }