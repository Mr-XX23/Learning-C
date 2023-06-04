/* to find circumfrence of cirlce */
#include<stdio.h>
#include<conio.h>
#define PI 3.14

int main(){
	float r, P;	
	printf("Enter the radius: \n");
	scanf("%f", &r);
	P=2*PI*r;
	printf("Circumference is %f", P);
}
