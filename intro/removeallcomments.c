#include<stdio.h>
/*
 Ex 1-23
 A program to remove all comments from input program
  */
int main(){

	int c;
	char quotes=0, slash=0, one=0, two=0;
	char s;
	char lastsymbol;
	while((c=getchar())!=EOF)
	{
	
	
		if(quotes!=0)
		{
			putchar(c);
			if(c==s) quotes=0;	
		}
		else if(slash!=0)
		{
			if(c=='*')
			{
				one=1;
			
			}
			else if(c=='/')
			{
				two=1;
			}
			else
			{
				putchar(lastsymbol);
				putchar(c);
			}
				slash=0;	

		}	
		else if(one!=0)
		{
			if(c=='*' || c=='/')
			{
				if(c=='/' && lastsymbol=='*') one=0;
				else lastsymbol=c;
			}		

		}
		else if(two!=0)
		{
			if(c=='\n') two=0;
		
		}	
		else
		{
			if(c=='\"' || c=='\'')
			{
				quotes=1;
				putchar(c);
				s=c;
			}
			else if(c=='/')
			{
				slash=1;
				lastsymbol=c;
			}	
			else putchar(c);
		}
	
	}


	return 0;
}
