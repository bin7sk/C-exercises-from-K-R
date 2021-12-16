#include<stdio.h>
#include<stdlib.h>
/*
 Create a file which consists of zero bytes only
   
   */
#define FILE_NAME_LENGTH 100
int main(){
	printf("Enter file name:\n");
	char fname[FILE_NAME_LENGTH];
	scanf("%s", fname);
	FILE *file;
	file = fopen(fname, "w");
	if(!file){
		perror(fname);
		return 1;
	}
	printf("Enter length (in bytes) of file\n");
	int nbytes;
	scanf("%d", &nbytes);
	char *zero = malloc(nbytes);
	for(int i = 0; i<nbytes;i++) *(zero + i) = 0;
	fwrite(zero,1,nbytes,file);
	printf("Created file %s which consists of %d bytes\n", fname, nbytes);
	fclose(file);
	
}
