#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);

    printf("The sum is = %d ",sum(num));
}

int sum( int n)
{
    if(n==1)
        return 1;
    else
        return n + sum(n-1);
}
