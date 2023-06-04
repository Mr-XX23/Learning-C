#include<stdio.h>
#include<conio.h>

int main() {
	
	//area of a square = h * h or l * l
	
	float length, area;
	printf("Enter length to find the area of a square: \n");
	scanf("%f", &length);
	
	area = length * length;
	
	printf("The area of the square is %f", area);
	
	
	
	
	return 0;
}
