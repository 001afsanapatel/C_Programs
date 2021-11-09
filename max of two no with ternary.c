#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b, max;
    printf("enter two integers \n");
    scanf("%d %d",& a,& b,& max);
    
    max=(a>b)?(a):(b);
    
    printf("max of %d and %d is %d",a,b,max);
    
    return 0;
}