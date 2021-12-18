#include<stdio.h>
#include<stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/*
 low-level io
 create a file which contains n bytes
*/   
int main(int argc, char* argv[]){
	if(argc!=3){
		fprintf(stderr, "Program has to contain 2 arguments\n"
				"1'st argument = name of file to create\n"
				"2'nd argument = number of bytes in file\n");
		return 1;	
	}
	int descriptor = 0;
	descriptor = open(argv[1], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if(!descriptor){
		fprintf(stderr, "Error while openning file\n");
		return 1;
	}
	int b,counter;
       	counter = sscanf(argv[2], "%d", &b);
	if(counter!=1){
		fprintf(stderr,"2nd argument must be number\n");
		return 1;
	}
	char *x = malloc(b);
	counter = write(descriptor, x, b);
	if(counter!=b){
		fprintf(stderr,"Error while writing to file\n");
		return 1;
		
	}
	close(descriptor);
	return 0;
}
