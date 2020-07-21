#include<stdio.h>
int main()
{
    int n,i,a[100], key;
    int result = -1;

    printf("Enter Array Size : ");
    scanf("%d",&n);

    printf("Enter array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter Search Key : ");
    scanf("%d",&key);

    int low,high,mid;
    low=0;
    high=n-1;
    mid=(low+high)/2;

   while (low <= high)
	{
		// find the mid value in the search space and
		// compares it with target value
		int mid = (low + high)/2;

		// if target is found, update the result and
		// go on searching towards right (higher indices)
		if (key ==a[mid])
		{
			result = mid;
			low = mid + 1;
		}

		// if target is less than the mid element, discard right half
		else if (key< a[mid])
			high = mid - 1;

		// if target is more than the mid element, discard left half
		else
			low = mid + 1;
	}

	// return the leftmost index or -1 if the element is not found
	return result;

	bool found = false;

	 if (!found)
        printf("Item not found.");
    else
        printf ("Last occurence=%d ",mid);
    return 0;
}
