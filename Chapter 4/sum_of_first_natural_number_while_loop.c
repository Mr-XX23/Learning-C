#include<stdio.h>
#include<conio.h>

int main() {
    int n, i = 0, sum = 0;
    printf("Enter the number of natural number\n");
    scanf("%d", &n);

    // while (i<=n)
    // {
    //     sum += i ; // sum = sum + i
    //     i++;
    // }

    // for ( i = 1; i <= n; i++ )
    // {
    //     sum += i ; // sum = sum + i
    // }

    do
    {
        sum += i; // 0 // 1+0=1 // 1+2=3 // 3+3=6 // 6+4=10 // 10+5=15 == 15
        i++; // 1 // 2 // 3 // 4 // 5 // 6
    } while (i<=n); // 1<=5 T // 2<=5 T // 3<=5 T //  4<=5 T //  5<=5 T // 6<=5 F Out of loop //

    do
    {
        i++; // 1 // 2 // 3 // 4 // 5 // 6
        sum += i; // 0+1=1 // 1+2=3 // 3+3=6 // 6+4=10 // 10+5=15 // 15+6=21 // == 21
    } while (i<=n); // 1<=5 T // 2<=5 T // 3<=5 T //  4<=5 T //  5<=5 T // 6<=5 F Out of loop //

    printf("The sum of first n natural number are %d", sum);
    return 0;
};