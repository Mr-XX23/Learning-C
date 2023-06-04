#include<stdio.h>
#include<conio.h>

void main () {

    float p, c, m, total;
    float percentage;
    printf("ENTER THE MARKS IN PHYSIC, CHEMISTRY AND MATHS \n");
    scanf("%f %f %f", &p, &c, &m );
    total = p + c + m;
    percentage = ( total * 100 ) / 300;
    printf("Your Total marks is %f out of 300. \nYour Total percentage is %f out of 100% \n", total, percentage);
    if (percentage > 40 && p >= 33 && c >= 33 && m >= 33) {
        printf("You got %f and You are pass", percentage);
    }
    else {
        printf("You are fail");
    }
};  
