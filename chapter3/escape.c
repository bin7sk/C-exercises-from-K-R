#include <stdio.h>
#define MAXLENGTH 1000
// Ex 3-2
/* Write a function escape(s,t) that converts characters like newline and tab into visual escape sequences.
 function unescape do opposite way */

void escape(char s[], char t[]);
void getstring(char s[]);
void printstring(char s[]);
void unescape(char s[], char t[]);
int main()
{
	char s[MAXLENGTH];
	char t[MAXLENGTH];
	getstring(t);
	printf("Escaped:\n");
	escape(s, t);
	printstring(s);
	printf("Unescaped:\n");
	unescape(t, s);
	printstring(t);
	return 0;

}
void escape(char s[], char t[])
{
	int i = 0;
	int j = 0;
	while(t[i] != '\0')
	{
		switch(t[i])
		{
			default:
				s[j] = t[i];
				break;
			
			case '\n':
				s[j++] = '\\';
				s[j] = 'n';
				break;
			case '\t':
				s[j++] = '\\';
				s[j] = 't';
				break;
		
		}
		++i;
		++j;
	
	}
	s[j]='\0';


}
void printstring(char s[])
{
	int i = 0;
	while(s[i] != '\0')
	{
		putchar(s[i]);
		++i;
	}
	putchar('\n');
}
void unescape(char s[], char t[])
{
	int i = 0;
	int j = 0;
	while(t[i] != '\0')
	{
		switch(t[i])
		{
			default:
				s[j] = t[i];
				break;
			case '\\':
				switch(t[i + 1])
				{
					default:
						s[j] = t[i];
						break;
					case 'n':
						t[j] = '\n';
						break;
					case 't':
						t[j] = '\t';
						break;
				}
				i++;
				break;
		}
		++i;
		++j;

	
	}
	s[j] = '\0';
}
void getstring(char s[])
{
	int i = 0;
	int c;
	while((c = getchar()) != EOF)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
}


