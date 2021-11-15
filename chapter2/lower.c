#include<stdio.h>
/*
	Function lower converts upper case letters to lower case
	with a conditional expression
*/
void lower(char s[])
{
	int i=0;
	while(s[i]!='\0')
	{
		s[i]=(s[i]<='Z'&& s[i]>='A')?'a'+(s[i]-'A'):s[i];  
		i++;	
	}

}
int main()
{
	char s[1000];
	int c;
	int i=0;
	while((c=getchar())!=EOF)
	{
		if(i<999 && c!='\n')
		{
			s[i]=c;
			i++;

		}
		else{
			s[i]='\0';
			lower(s);
			printf("%s\n", s);
			i=0;
			
			
		}

	
	}
		
		
	
	return 0;
}
