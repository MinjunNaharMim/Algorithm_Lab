#include<stdio.h>
int main()
{
    int num[100],position=-1,value,i,n;

    printf("Enter number: ");
    scanf("%d",&n);

    printf("Enter search number: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }

    printf("Enter value you want to search: ");
    scanf("%d",&value);
    //linear shearch

    for(i=0; i<n; i++)
    {
        if(value==num[i])
        {
            position=i+1;
            break;
        }

    }
    if(position==-1)
    {
        printf("Not found");
    }
    else
    {
        printf("The value is %d position",position);
    }

}
