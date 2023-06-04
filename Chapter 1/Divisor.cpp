#include<stdio.h>
#include<conio.h>

int main() {
	int n1;
	int n2;
	int dividend;
	int divisor;
	int temp;
	
	printf("Enter the two values\n");
	scanf("%d %d", &n1, &n2);
	
if ( n1 > n2 ) {
	dividend = n1;
	divisor = n2;
}
else {
	dividend = n2;
	divisor = n1;
};

while (dividend % divisor || 0 ) {
	temp = divisor;
	divisor = dividend % temp;
	dividend = temp;
}

return divisor;
}
