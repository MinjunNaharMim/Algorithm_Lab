#include<stdio.h>

int main ()
{
    int n;
   printf("Fn: ");
   scanf("%d",&n);

   int fib(int n)
{
   if (n <= 1)
      return n;
   return fib(n-1) + fib(n-2);
}


  printf("Fn =%d", fib(n));

  return 0;
}
