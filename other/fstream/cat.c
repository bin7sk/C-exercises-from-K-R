#include<stdio.h>
//self-made cat
int main(int argc, char* argv[]){
	if(argc==1){
		int c;
		while((c=getchar())!=EOF) putchar(c);
		return 0;
	}
	for(int i=1;i<argc;i++){
		FILE *file = fopen(argv[i], "r");
		if (!file){
			perror(argv[i]);
			return 1;
		}
		int c;
		while((c=fgetc(file))!=EOF) putchar(c);
	}
	return 0;

}
