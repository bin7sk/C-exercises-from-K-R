#include<stdio.h>
/*
 Exercise 5-2
 getfloat converts input stream to floating-point number 
*/
int getfloat(double *ptr);
int main(void)
{
	printf("Enter floating point number\n");	
	double d = 0;
	getfloat (&d);
	printf("%f\n", d);

}
int getfloat(double *ptr)
{
	int c;
	char sign;
	double d = 0;

	//skip whitespace
	while((c=getchar()) =='\n' || c=='\t' || c==' ');
	if (c == EOF) return 1;
	//set sign
	if(c=='-'){ 
		c = getchar();
		if (c == EOF) return 1;
		sign = '-';
	}
	else if (c=='+'){
		c = getchar();
		if (c == EOF) return 1;
		sign = '+';
	} 
	else sign = '+';
	//numbers before dot
	for(;c >= '0' && c <= '9'; c=getchar()){
		d *= 10;
		d += (double) (c - '0');
	}
	//numbers after dot
	if(c == '.'){
		c = getchar();
		for(double exp = 0.1;c >= '0' && c <= '9'; c=getchar()){
			d += (double) (c - '0') * exp;
			exp /= 10;
		}
	}
	//exponent
	if(c == 'e' || c == 'E'){
		char exp_sign;
		int exp = 0;
		c = getchar();
		if(c =='-'){
			c = getchar();
			exp_sign = '-';
		}
		else if(c=='+'){
			c = getchar();
			exp_sign = '+';
		}
		else exp_sign = '+';
		for(;c >= '0' && c <= '9'; c=getchar()){
			exp *= 10;
			exp += c - '0';	
		}
		if(exp_sign == '-') exp *= -1;
		while(exp){
			if(exp > 0){
				d *= 10;
				exp--;	
			} 
			else{
				d /= 10;
				exp++;
			}
		}
	}
	if(sign =='-') d *=-1;
	*ptr = d;
	return 0;
}
