#include<stdio.h>
/*
 	Ex 2-4
	Function squeeze that deletes each character in s1 that matches any characher in the string s2 

 */
#define MAX 100
void squeeze(char s1[], char s2[]){
	int z=0, i=0;	
	while(s1[i]!='\0'){
		int j=0;
		for(; s2[j]!='\0';j++)
		{
			if(s1[i]==s2[j]){
				break;
			}
		
		}
		if(s2[j]=='\0'){
			s1[z]=s1[i];
			z++;
		}
		i++;	
	}
	s1[z]='\0';
}
int main(){
	char s1[MAX], s2[MAX];
	int c;
	int i=0;
	
	printf("Enter line:\n");
	while((c=getchar())!=EOF && c!='\n' && i<MAX-1) s1[i++]=c;
	s1[i]='\0';
	printf("Enter symbols that must be deleted:\n");
	i=0;
	while((c=getchar())!=EOF && c!='\n' && i<MAX-1) s2[i++]=c;
	s2[i]='\0';
	squeeze(s1,s2);
	i=0;
	while(s1[i]!='\0')
	{
		putchar(s1[i]);
		i++;
	}	
	putchar('\n');

	
	return 0;
}
