#include<stdio.h>
int main()
{
    double base,exp;
    printf("Enter base & exp : ");
    scanf("%lf%lf",&base,&exp);

    double result=pow(base,exp);
    printf("%.2lf",result);
}
