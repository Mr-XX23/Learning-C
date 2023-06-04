#include<stdio.h>
#include<conio.h>

// function decleration
float average(float a, float b, float c);

int main() {
    // function call
    float a, b, c, avg;
     printf("Enter the three number\n");
     scanf("%f%f%f", &a, &b, &c);
     avg = average(a, b, c);
     printf("The average of %f, %f, %f is %f", a, b, c, avg);
    return 0;
}


// function definition
float average(float a, float b , float c) {
    float result;
    result = ( a + b + c ) / 3; 
    return result;
}
 