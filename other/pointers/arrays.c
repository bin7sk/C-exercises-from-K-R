#include<stdio.h>

int main(void)
{
	int arr[5][25] = {0};
	int (*ptr)[25];
	ptr = arr;
	printf("arr[2][20] = %d\n", ptr[2][20]);

	int arr3[3][10][20];
	arr3[2][8][6] = 777;
	int (*ptr3)[10][20];
	ptr3 = arr3;
	printf("arr3[2][8][6] = %d\n", ptr3[2][8][6]);

	return 0;
}
