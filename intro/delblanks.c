#include<stdio.h>
//Program to copy its input to its output, replacing many blanks to one

int main(){
	int c;
	c=getchar();
	while(c!=EOF){
		putchar(c);
		if(c==' '){
			while(c==' ') c=getchar();
			if(c!=EOF)
				putchar(c);
			else
				break;
		}
		c=getchar();
	}	

	return 0;
}
