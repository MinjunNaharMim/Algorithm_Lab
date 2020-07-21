#include <stdio.h>

int main() {
    int n, a[100], k, id = -1,row;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    printf("Enter array elements: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the product key: ");
    scanf("%d",&k);

    for (int i = 0; i < n; i++) {
        if (a[i] == k) id = i;
    }
    if (id == -1)
       printf( "Product not available." );
    else
       printf("Position = %d row", id , row);
    return 0;
}

