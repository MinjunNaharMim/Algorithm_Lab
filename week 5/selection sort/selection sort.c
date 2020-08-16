#include<stdio.h>
int main()
{
    int n,a[50],i,j,temp;

    printf("\nEnter the size of array: \n");
    scanf("%d",&n);

    printf("\nEnter the element for the array: ");

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

    }

    printf("\nThe unsorted elements of the array are: \n");
    for(i=0; i<n; i++)
    {
        printf("%d\n",a[i]);
    }
    printf("\nThe sorted elements of the array are: \n");

    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0; i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}

