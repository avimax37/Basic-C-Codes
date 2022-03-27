#include<stdio.h>

int main()
{
    int n,i,sum=0;
    printf("Enter the value of n:\n");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        sum+=i;
    }

    printf("Sum of the first %d natural numbers is: %d",n,sum);

    return 0;
}