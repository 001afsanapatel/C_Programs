#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("enter two integers \n",a,b);
    scanf("%d %d",&a,&b);
    
    if(a>b)
    {
    printf("%d is largest value \n",a);
    }
    
    else if(b>a)
    {
    printf("%d is largest value \n",b);
    }
    else
    {
    printf("both integers are equal \n");
    }
    return 0;
}