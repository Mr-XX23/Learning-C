#include<stdio.h>

int main() {
    int marks[4];
    printf("Value of marks of student 1: ");
    scanf("%d", &marks[0]);
    printf("Value of marks of student 2: ");
    scanf("%d", &marks[1]);
    printf("Value of marks of student 3: ");
    scanf("%d", &marks[2]);
    printf("Value of marks of student 4: ");
    scanf("%d", &marks[0]);
    printf("The value of marks are %d %d %d and %d", marks[0], marks[1], marks[2], marks[3]);
    return 0;
}