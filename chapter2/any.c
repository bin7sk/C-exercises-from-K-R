#include<stdio.h>
/*
	Exercise 2-5
	Function any(s1,s2) returns the first location in a string s1
	where any character from the string s2 occurs

*/
#define MAX 1000
int any(char s1[], char s2[])
{
	int i=0;
	while(s1[i]!='\0')
	{
		for(int j=0; s2[j]!='\0';++j) 
			if(s1[i]==s2[j]) return i;
		i++;
	}
	return -1;
}
int main()
{
	char s1[MAX]=
		"news:\n"
		"SpaceX launches (pictured) four astronauts on the Crew-3 mission to the International Space Station.\n"
		"Former South African president F. W. de Klerk, who negotiated the end of apartheid with Nelson Mandela, dies at the age of 85.\n"
		"In stock car racing, Kyle Larson wins the NASCAR Cup Series championship.";
	char s2[]="wlcom111";
	printf("%d\n",any(s1,s2));		
	
	return 0;
}
