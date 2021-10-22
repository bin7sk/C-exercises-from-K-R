/* Exercise 1-18*/
/*
 A program to remove trailing blanks and tabs from each line of input
 	   to delete entirerly blank lines
*/
#include <stdio.h>
#define MAXLINELENGTH 100
void printline(char s[]){
	for(int i=0; s[i]!='\0';++i)
		printf("%c",s[i]);
	printf("\n");
}
int getl(char s[], int length){
	int i, c;
	for(i=0; i<length-1 && (c=getchar())!=EOF && c!='\n';++i)
		s[i]=c;
	if(i==0 && c==EOF)
		return -1;
	else
		s[i]='\0';
	return i;
}

int main(){
	char str[MAXLINELENGTH];
	int i=0;
	while((i=getl(str, MAXLINELENGTH))>=0){
		if (i>0){
			--i;
			while(str[i]==' ' || str[i]=='\t'){
				--i;
			}
			str[i+1]='\0';
			printline(str);
		}
	}	
		

	return 0;
}
