/* to find avg of 5 subject */
#include<stdio.h>
#include<conio.h>

int main () {
	float a,b,c,d,e,avg;
	printf("Enter the five marks of Subject\n");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	avg=(a+b+c+d+e)/5;
	printf("Average marks is %f", avg);
	return 0;
}
