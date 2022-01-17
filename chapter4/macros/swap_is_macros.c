#include<stdio.h>
#define swap(t, x, y) {\
			t temp;\
			temp = x;\
			x = y;\
			y = temp;\
			}
int main(){
	int a,b;
	printf("Enter a: ");
	scanf("%d", &a);

	printf("Enter b: ");
	scanf("%d", &b);

	swap(int, a, b);
	printf("After swap: \n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);

}
