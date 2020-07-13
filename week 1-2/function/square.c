#include<stdio.h>
int square(int a)
{
    return a*a;
}

int main()
{
    int num;
    printf("Enter the number is: ");
    scanf("%d",&num);
    int result=square(num);
    printf("the square is : %d\n",result);

}

