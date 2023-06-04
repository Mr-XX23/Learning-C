#include<stdio.h>

int main() {
    FILE *ptr;
    int number = 48; 

    // Write
    ptr = fopen("sample.txt", "w"); // w --> write
    fprintf(ptr,"The number is %d", number);

    // read
    ptr = fopen("sample.txt", "r"); // r --> read

    fclose(ptr);
    return 0;
} 