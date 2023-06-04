#include<stdio.h>
#include<conio.h>

// function decleration
int fibonacci( int n );

int main() {
    int n;
    printf("Enter the number ( upto )");
    scanf("%d", &n);
    fibonacci( n ) = fibonacci(n-1) + fibonacci(n-2);
}


// function definition
int fibonacci( int n ) {
    int n1 = 0, n2 = 1, n3;

    if (n>0)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        printf("%d")
    }
    
}
