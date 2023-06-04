#include<stdio.h>
#include<conio.h>

int main() {
    int year;
    printf("Enter the date\n");
    scanf("%d", &year);

    if ( year % 4 == 0 && year % 100 == 0 && year % 400 == 0) {
     printf("The %d is a leap year\n", year);
    }
    else {
         printf("The %d is not a leap year\n", year);
    }
    return 0;

}