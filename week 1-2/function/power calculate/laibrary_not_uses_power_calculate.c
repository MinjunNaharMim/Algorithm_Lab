#include<stdio.h>
int main()
{
    double base,exp,i,result=1;
    printf("Enter base & exp : ");
    scanf("%lf%lf",&base,&exp);

    for(i=1; i<=exp; i++)
    {
        result=result*base;
    }
    printf("%.1lf",result);
}

