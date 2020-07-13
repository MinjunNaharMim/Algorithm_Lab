#include<stdio.h>
void calculatePower( double base, double exp)
{
    double i, result=1;
    for(i=1; i<=exp; i++)
    {
        result=result*base;
    }
    printf("%lf",result);
}
int main()
{
    double base,exp;
    printf("Enter base & exp : ");
    scanf("%lf%lf",&base,&exp);

    calculatePower(base, exp);
}
