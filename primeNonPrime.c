#include<stdio.h>

int main()
{
    int num, i, flag=0;
    printf("Enter a number:\n");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            flag++;
        }
    }

    if(flag==2)
    {
        printf("%d is a Prime number.",num);
    }
    else
    {
        printf("%d is not a Prime number.",num);
    }

    return 0;
}

