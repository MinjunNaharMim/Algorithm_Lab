#include <stdio.h>
int addNumbers(int n);
int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Sum is= %d",fact(num));
    return 0;
}
int fact(int n)
{
    if(n == 1)
        return 1;
    else
        return n * fact(n - 1);

}
