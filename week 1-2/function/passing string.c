#include<stdio.h>
void display(char s1[])
{
    int i=0;
    while(s1[i]!='\o')
    {
        printf("%c\n",s1[i]);
        i++;
    }
}
int main()
{
    char str[]="Mim";
    display(str);
}
