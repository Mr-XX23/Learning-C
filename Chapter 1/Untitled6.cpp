
#include<stdio.h>
#include<conio.h>


int main () {
 int a =10;
 while (a < 20)
 {
	printf("Value of a: %d\n", a);
	a++;
	if (a>15) {
		continue;
	}
 }
 
  return 0;
}