#include<stdio.h>
#include<conio.h>

void main () {

    int a;
    printf("ENTER THE NUMBER \n");
    scanf("%d", &a );
    ( a % 2 == 0 ) ? printf("%d is a even number", a) : printf("%d is a odd number", a);
        
};