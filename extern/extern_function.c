#include<stdio.h>
void hello_from_other_file(void){
	printf("Hello from extern_function.c\n"
	       "Compiler is smart enough to find me");
	putchar('\n');
}
