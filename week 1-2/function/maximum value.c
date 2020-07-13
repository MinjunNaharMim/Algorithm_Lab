#include<stdio.h>
void display(int x[])
{
    int i;
    int max=x[0];
    for(i=1; i<5; i++)
    {
       if(max<x[i])
       {
           max=x[i];
       }
       printf("%d",max);
    }
}
int main()
{
    int n[100];
    n[100]=(10,20,30,40,50);
    display(n);
}
