#include <stdio.h>
#include <math.h>
/*
 A program to solve quadratic equation
 */
double descriminant(double a,double b,double c) {
	return b*b - 4*a*c;
}
int main(){
	double a, b, c, d, x1, x2;
	int n;
	printf("Enter coefficients of quadratic equation:\n");
	n=scanf("%lf %lf %lf", &a, &b, &c);
	if(n!=3){
		printf("Trouble with reading all coefficients\n");
		return 1;
	}
	if(a==0){
		printf("Equation isn't quadratic\n");
		return 2;
	}
	d=descriminant(a,b,c);
	if(d<0){
		printf("No roots of equation!\n");
		return 0;
	}
	d=sqrt(d);
	x1=(-b+d)/(2*a);
	x2=(-b-d)/(2*a);
	printf("x1=%.5f\nx2=%.5f\n", x1, x2);
	

	return 0;
}
