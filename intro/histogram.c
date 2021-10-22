#include <stdio.h>
/*Exercises 1-13, 1-14*/
/*Program to print a vertical histogram of the lengts of words in its input*/
/*	 to print a horizontal histogram of the frequencies of the different characters*/

#define MAX_NUMBER_OF_WORDS 1000
#define ASCII_SIZE 127
#define IN 1
#define OUT 0	 
int main(){

	int length[MAX_NUMBER_OF_WORDS];
	for (int i=0; i<MAX_NUMBER_OF_WORDS;i++){
		length[i]=0;
	}
	int frequency[ASCII_SIZE];
	for (int i=0; i<ASCII_SIZE;i++){
		frequency[i]=0;
	}

	int c,l;
	char stat=OUT;
	c=getchar();
	l=0;
	while(c!=EOF){
		if(c!=' '&& c!='\t' && c!='\n'){
			length[l]++;
			stat=IN;
			}
		else {
			if(stat) l++;
			stat=OUT;
		}
		frequency[c]++;	
		c=getchar();
	}
	int max=length[0];
	for(int i=1; i<=l;i++){
		if(length[i]>max)
			max=length[i];
	}
	printf("\nHistograms:\n");
	while(max){
		for(int i=0;i<=l;++i){
			if(length[i]>=max)
				printf("*");
			else
				printf(" ");			
			printf(" ");
		}
		printf("\n");
	max--;
	}	
	
	for (int i=32; i<ASCII_SIZE;i++){
		printf("%c:",i);
		int stars=frequency[i];
		while(stars){ 
			printf("*");
			stars--;
		}	
		printf("\n");
	}	
	

	return 0;
}
