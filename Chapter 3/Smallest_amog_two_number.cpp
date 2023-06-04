// to find smallest among two number


#include<stdio.h>
#include<conio.h>

int main () {
 float a, b;
 printf("Enter the first number and second number\n");
	scanf("%f%f", &a, &b); 
	
	if ( a < b ) 
	printf("The smallest number is %f", a);
	else 
	printf("The smallest number is %f", b);
return 0;
}
