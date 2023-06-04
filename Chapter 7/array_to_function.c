#include<stdio.h>

void printArray( int *ptr, int n );

int main() {
    int arr[] = {1,23,46,464,6,464,6,46,64,64,6};
    printArray(arr, 11);
    return 0;
}

void printArray( int *ptr, int n ) {
    for (int i = 0; i<n; i++){
       printf("The value of elments %d is %d\n", i+1, *(ptr+i));
    }
}