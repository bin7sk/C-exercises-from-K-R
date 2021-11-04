#include<stdio.h>
/*Exercise 1-19*/
/*reverse input a line at a time*/
#define MAXLINE 80
void reverse(char s[]);
int main(){
	char s[MAXLINE];
	int c;
	int l=0;
	while((c=getchar())!=EOF){
		if(l<MAXLINE){
			s[l]=c;
		}
		else{
			printf("sorry,but this line is too big for me\n");
			l=0;
			continue;
		}
		if(s[l]=='\n'){
			reverse(s);
			for(int i=0;s[i]!='\n' && s[i]!='\0';++i){
				putchar(s[i]);
			}
			putchar('\n');
				
			l=0;
			continue;
		}		
		l++;
	
	}	
	return 0;
}

void reverse(char s[]){
	int c=0;
	while(s[c]!='\n' && s[c]!='\0') c++;
	c--;
	if(c<=0) return;
	int i=0;
	while(i<c){
		int tmp=s[i];
		s[i]=s[c];
		s[c]=tmp;
		c--;
		i++;
	}

}
