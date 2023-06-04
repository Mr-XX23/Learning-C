#include<stdio.h>

int main() {
    int i, marks[5];
    
    for(i=0; i<5; i++) {
        printf("Enter the value of student : %d ", i+1);
        scanf("%d", &marks[i]);
    }

     for(i=0; i<5; i++) {
        printf("The value of %d student's marks are : %d \n", i+1, marks[i+1]);
    }


    return 0;
}