#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	
	int *A = (int *)malloc(n*sizeof(int));
	for(int i = 0;i<n;i++)
	{
		A[i]= i +1;
	}
	free(A);
	//A = NULL;
	A[1] = 5;
	for(int i = 0;i<n;i++)
	{
		printf("%d ",A[i]);
	}
	printf("\n");
	return 0;
}
