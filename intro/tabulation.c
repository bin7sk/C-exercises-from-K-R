#include <stdio.h>
#define TAB 8
/*
 Ex. 1-20
A program that replaces tabs in the input with the proper number of blanks to space to the next tab stop
  */
int main(){

	int c;
	int pos=1;
	while((c=getchar())!=EOF)
	{
		if(c!='\t') putchar(c);
		else
		{
			int spaces = pos%TAB ;
			for(;spaces > 0; spaces--)
				putchar(' ');	
		
		}
		pos++;
	
	
	}
	return 0;
}
