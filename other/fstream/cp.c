#include<stdio.h>
/*
 self-made cp
*/
int main(int argc, char* argv[]){
	if(argc != 3){
		printf("Program must have 3 arguments!\n");
		return 1;
	}
	FILE *src = fopen(argv[1], "r");
	FILE *dest = fopen(argv[2], "w");
	int c;
	while((c=fgetc(src))!= EOF) fputc(c, dest);
	return 0;

}
