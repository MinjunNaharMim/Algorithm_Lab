#include<stdio.h>
double triangleArea(double b, double h)
{
    return 0.5*b*h;
}

int main()
{
    int base,height;
    printf("Enter base ans height: ");
    scanf("%d%d",&base,&height);
    int area=triangleArea(base,height);
    printf("the area of triangle is : %d\n",area);

}


