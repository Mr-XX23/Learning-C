 

// max = num1; // Assume num1 is the largest number 
    // if (num2 > max) {
    //     max = num2; 
    // } if (num3 > max) {
    //     max = num3;
    // }  
    // if (num4 > max) {
    //     max = num4; 
    // };

    // WAP to find greatest among 3 number



#include<stdio.h>
#include<conio.h>

int main() {
	float a , b, c;
	printf("Enter the first number, second number, third number\n");
	scanf("%f%f%f", &a, &b, &c);
	if ( a > b && a > c) 
		printf("The greatest number is %f", a);
	if ( b > a && b > c) 
		printf("The greatest number is %f", b);
	
	if ( c > a && c > b) 
		printf("The greatest number is %f", c);	
	
	return 0 ;
}