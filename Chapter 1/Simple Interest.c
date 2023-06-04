/* WAP to find the simple interest */

#include<stdio.h>
#include<conio.h>
int main() {
	float p, t, r, si;
	printf("Enter Principle, time, rate\n");
	scanf("%f%f%f", &p,&t,&r);
	si=(p * t * r) / 100;
	printf("The simple interest is %f", si);
}
