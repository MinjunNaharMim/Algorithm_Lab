#include <stdio.h>

int findLastOccurrence(int A[], int N, int x)
{
	int low = 0, high = N - 1;
    int result = -1;

	while (low <= high)
	{

		int mid = (low + high)/2;

		if (x == A[mid])
		{
			result = mid;
			low = mid + 1;
		}


		else if (x < A[mid])
			high = mid - 1;

		else
			low = mid + 1;
	}

	return result;
}

int main(void)
{
	int A[] = {1,2,3,3,3,4,4,5};
	int n = sizeof(A)/sizeof(A[0]);

	int target = 3;

	int index = findLastOccurrence(A, n, target);

	if (index != -1)
		printf("First occurrence of element %d is found at index %d",
				target, index);
	else
		printf("Element not found in the array");

	return 0;
}
