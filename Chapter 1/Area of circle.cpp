/* to find area of circle */
#include<stdio.h>
#include<conio.h>
#define PI 3.14

int main(){
	float r, A;	
	printf("Enter the radius: \n");
	scanf("%f", &r);
	A=PI*r*r;
	printf("Area is %f", A);
}
