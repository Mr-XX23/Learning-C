// to find give alphabet is vowel or consonent


#include<stdio.h>
#include<conio.h>

int main () {
	char a;
	printf("Enter alphabet to check if it is a vowel or consonet\n");
	scanf("%c", &a);
	
	if ( a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' )
	printf("It is a vowel letter");
	else 
	printf("It is a consonents");
	return 0;
}
