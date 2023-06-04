#include<stdio.h>
#include<conio.h>

int main() {
    int n = 0, i = 1, factorial = 1;
    printf("Enter the number for factorical \n");
    scanf("%d", &n);


    // for ( i = 1; i <= n; i++ )
    // {
    //     factorial *= i ; // factorial = factorial * i
    // }
    while (i<=n)
    {
        factorial *= i ;
        i++;
    }
    printf("The factorial of %d is %d", n, factorial);
    return 0;
};