// WAP to find given alphabet is in uppercase or lowercase


#include<stdio.h>
#include<conio.h>

int main() {
	char ch;
	printf("Enter a alphabhet\n");
	scanf("%ch", &ch);
	// When you give 'A' then compliers turns into ASCII value which is 65 ( A = 65 )
	// if ( ch>= 65 && ch<= 90 ) = Uppercase
	if ( ch>= 'A' && ch<= 'Z' )
	printf("Alphabhet is in Uppercase");
	
	// if ( ch>= 97 && ch<= 122 ) = Lowercase
	else 
	printf("Alphabhet is in Lowercase");
	
	return 0;
}
