#include<stdio.h>
#include<stdlib.h>

/*
 Program that takes input, sort all words, saves to file
*/
#define MAX_NUMBER_OF_WORDS 1000
#define MAX_WORD_LENGTH 100
int main(void){
	//file to save sorted words
	
	FILE *file = NULL;
	char fname[100];
	while(!file){
		printf("Enter file name to save sorted elements:\n");
		scanf("%s", fname);
		file = fopen(fname, "w");
		if(!file) perror(fname);
	}

	int nwords=0; 
	char* words[MAX_NUMBER_OF_WORDS];
	char word[MAX_WORD_LENGTH];
	printf("Enter words to sort in alphabetical order:\n");
	int c;
	int i = 0;
	while((c=getchar())!=EOF){
	if(c=='\n' || c=='\t' || c==' '){
		if(i==0) continue;
		if(nwords<MAX_NUMBER_OF_WORDS){
			words[nwords] = malloc(i+1);
			for(int j=0;j<=i;j++){
				*(words[nwords] + j) = word[j];
			}
			*(words[nwords] +i + 1) = '\0';
			i = 0;
			nwords++;	
		}
	}
	else{
		if(i==MAX_WORD_LENGTH) continue;
		word[i++] = c;
	}
	}

	//easiest and slowest alphabet sorting 
	int s = 0;
	c = 'a';
	while(c<='z'){
		for(int j=s;j<nwords;j++){
			if(*words[j] == c){
				char *tmp;
				tmp = words[s];
				words[s] = words[j];
				words[j] = tmp;				
				s++;
			}
			
		}
		c++;
	}
	c = 'A';
	while(c<='Z'){
		for(int j=s;j<nwords;j++){
			if(*words[j] == c){
				char *tmp;
				tmp = words[s];
				words[s] = words[j];
				words[j] = tmp;				
				s++;
			}
			
		}
		c++;
	}
	c = '1';
	while(c<='9'){
		for(int j=s;j<nwords;j++){
			if(*words[j] == c){
				char *tmp;
				tmp = words[s];
				words[s] = words[j];
				words[j] = tmp;				
				s++;
			}
			
		}
		c++;
	}

	for(int j=0;j<nwords;j++){
		fprintf(file, "%s\n", words[j]);
	}
	fclose(file);
}
