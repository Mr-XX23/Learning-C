#include<stdio.h>
#include<conio.h>

int main() {
    float income, income_tax;
    printf("How much do you earn ?\n");
    scanf("%f", &income);

    if (income >= 250000 && income < 500000 ) {
        income_tax = (5*(income - 250000)) / 100;
    } if (income >= 500000 && income < 1000000 ) {
        income_tax = (20*(income - 250000)) / 100;
    } if (income >= 1000000 ) {
        income_tax = (30*(income - 250000)) / 100;
    };
    printf("The total imcome tax is %f\n", income_tax);
    return 0;

}