#include<stdio.h>
#include<stdlib.h>

int main()
{
	int B[2][3] = { 2,3,4,5,6,7};
	int (*p)[3] = B;
	printf("address of 1st element B        %p\n",B);
	printf("address of 1st element *B       %p\n",*B);
	printf("address of 1st element B[0]     %p\n",B[0]);
	printf("address of 1st element &B[0][0] %p\n",&B[0][0]);

	printf("address of 2nd element &B[0][1] %p\n",&B[0][1]);
	printf("address of 3rd element &B[0][2] %p\n",&B[0][2]);

	printf("address of 4th element (B+1)    %p\n",(B+1));
	printf("address of 4th element B[1]     %p\n",B[1]);
	printf("address of 4th element &B[1][0] %p\n",&B[1][0]);

	printf("value of 1st element *(*B)      %d\n",*(*B));
	printf("value of 1st element *(B[0])    %d\n",*(B[0]));
	printf("value of 1st element B[0][0]    %d\n",*(&B[0][0]));

	return 0;
}
