#include<stdio.h>

int main()
{
    int a,b,c;

    printf("Enter 3 numbers:\n");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b>c)
    {
        printf("%d is the greatest.",a);
    }
    else if(b>c>a)
    {
        printf("%d is the greatest.",b);
    }
    else
    {
        printf("%d is the greatest.",c);
    }

    return 0;
}