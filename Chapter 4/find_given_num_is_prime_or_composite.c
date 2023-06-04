#include<stdio.h>
#include<conio.h>

int main() {
    int num, i = 0, prime = 0;
    printf("Enter the number that you want to check, \n");
    scanf("%d", &num);


    for ( i = 2; i <= num; i++ )
    {         
        if ( num % i == 0 ) {
            prime = 1;
            break;
        }
    }
    if ( prime == 1 && num != i )
    {
       printf("This is not a prime number");
    }
    else {
        printf("This is prime number");
    }
    
    return 0;
};