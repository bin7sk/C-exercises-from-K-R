#include<stdio.h>
#include<stdlib.h>
// Program takes file and upper all characters.
int main(int argc, char* argv[]){
	if(argc!=2){
		fprintf(stderr,"Program must have 1 argument!\n");
		return 1;
	}
	FILE *file;
	file = fopen(argv[1],"r");
	if(!file){
		perror(argv[1]);
		return 1;
	}
	int c;
	while((c=fgetc(file))!=EOF){
		if(c>='a' && c<='z'){
			putchar('A'+(c-'a'));
		}
		else{
			putchar(c);
		}
		
	}
	fclose(file);
	return 0;
	
}
