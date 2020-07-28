#include<stdio.h>
int main()
{
    int n,i,max,min,different;
    printf("Enter Array Size : ");
    scanf("%d",&n);

    int a[n];
    printf("Enter Elements of Array : \n");

    for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
    int key,j;
    for(j=0; j<n; j++)
        {
            key=a[j];
            i=j-1;
            while(i>=0 && key<a[i])
            {
                a[i+1]=a[i];
                i--;
            }
            a[i+1]=key;
        }
    printf("Insertion Sorted list in Ascending : ");

    min=max=a[0];
    for(i=0; i<n; i++)
    {
           printf("%d ",a[i]);

           if (min>a[i])
                min = a[i];

            if (max<a[i])
                max = a[i];

            different=max-min;
    }
    printf("\nmax: %d\n",max);
    printf("min: %d\n",min);

    printf("Difference btn max-min:%d\n",different);
    return 0;
}
