#include<stdio.h>
#include<stdlib.h>

int main(void){
	int a= 6;
	float f = 1.5;
	char c = 'a';

	printf("Size of int %d \n",sizeof(a));
	printf("Size of float %d \n",sizeof(f));
	printf("Size of char %d \n",sizeof(c));

	printf("Size of int %d \n",sizeof(int));
	printf("Size of short int %d \n",sizeof(short));
	printf("Size of long %ld \n",sizeof(long));
	printf("Size of float %d \n",sizeof(float));
	printf("Size of long double %d \n",sizeof(long double));
	return 0;
}
	
