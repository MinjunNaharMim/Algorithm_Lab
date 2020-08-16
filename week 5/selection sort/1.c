#include<stdio.h>
int main()
{
    int n,a[50],i,j,temp, smallest, secondsmallest,k,l,m,largest,result=1;

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

        if (a[0]< a[1])
        {
            smallest=a[0];
            secondsmallest=a[1];

        }
        else
        {
            smallest=a[1];
            secondsmallest=a[0];
        }

        for(l=2; l<n; l++)
        {
            if(a[l]<smallest)
            {
                secondsmallest=smallest;
                smallest=a[l];
            }
            else if(a[l]<secondsmallest)
            {
                secondsmallest=a[l];
            }
        }

        largest=a[0];

        for(m=1; m<n; m++)
        {
            if(a[m]>largest)
            {
                largest=a[m];
            }
        }

        for(i=1; i<=largest; i++)
        {
            result=result*secondsmallest;
        }

    }
    printf("\n secondsmallest: %d",secondsmallest);
    printf("\n largest value: %d\n",largest);
    printf("result: %d",result);
}


