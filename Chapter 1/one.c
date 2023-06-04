#include<stdio.h>
#include<conio.h>

int main() {
	
	int x, y, add, sub, div, mul, modu;
	
	printf("Enter the value of x and y:\n");
	scanf("%d%d", &x, &y);
	
	add = x + y;
	sub = x - y;
	div = x / y;
	mul = x * y;
	modu = x % y;
	
	printf("The sum of x and y is %d \n", add);
	
	printf("The subtraction of x and y is %d \n", sub);
	
	printf("The multiplication of x and y is %d \n", mul);
	
	printf("The division of x and y is %d \n", div);
	
	printf("The remainder of x divide by y is %d \n", modu);
	
	
	
	
	
	return 0;
}
