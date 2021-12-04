#include <stdio.h>
/*
Ex 3 - 5
Function itob(n,s,b) that converts the integer n into a base b character representation in the string s
*/
void reverse(char s[]);
void itob(unsigned int n, char s[], unsigned int b);

int main(void)
{
	char str[1000];
	printf("Enter number(decimal): ");
	unsigned number;
	scanf("%u", &number);
	printf("Enter new base(from 2 to 16): ");
	unsigned int base;
	scanf("%u", &base);
	itob(number, str, base);
	printf("result : %s\n", str);

}
void reverse(char s[])
{
	unsigned int len;
	for(len = 0; s[len] !='\0'; ++len)
		;
	len--;
	for(unsigned int i = 0; i < len; ++i, --len)
	{
		char tmp;
		tmp = s[i];
		s[i] = s[len];
		s[len] = tmp;
	}
}
void itob(unsigned int n, char s[], unsigned int b)
{
	int i;
	for(i = 0;n;n /= b, ++i)
	{
		int ch = n % b;
		if(ch >= 0 && ch < 10)
		{
			s[i] = '0' + ch;
		}
		else if(ch >= 10 && ch < 16)
		{
			s[i] = 'A' + ch - 10;
		}
	}
	s[i] = '\0';
	
	reverse(s);
}
