#include<stdio.h>
#include<conio.h>

// function decleration
int add( int a, int b );

int main() {
    // function call
    int a, b, added_value;
    printf("Enter the two number that you want to add\n");
    scanf("%d %d", &a, &b);
    add( a,b );
    added_value =  add( a,b );
    printf("%d + %d = %d", a, b, added_value );
    return 0;
}


// function definition
int add( int a, int b ) {
    int sum;
    sum = a + b;
    return sum;
}
