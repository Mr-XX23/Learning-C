/* WAP to input temperature into centriragde and display the result into farenheit */

#include<stdio.h>
#include<conio.h>

 int main() {
 	float centi, faren;
 	printf("Enter the temperature that you want to convert \n");
 	scanf("%f", &centi);
 	
 	faren = (centi * 9 / 5) + 32;
 	printf("The temperature in farenheit is %f", faren);
 	return 0;
 }
