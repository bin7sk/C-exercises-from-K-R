#include <stdio.h>
/*Exercise 1-8*/
/*Program to count blanks, tabs, newlines*/
int main(){
	int c;
	long blanks=0, tabs=0, nl=0;
	c=getchar();
	while(c!=EOF){
		if(c==' ') ++blanks;
		if(c=='\t') ++tabs;
		if(c=='\n') ++nl;

		c=getchar();
	}
	printf("\nblanks:\t\t%5d\n"
		"tabs:\t\t%5d\n"
		"newlines:\t%5d\n",
		       	blanks, tabs, nl);


	return 0;
}
