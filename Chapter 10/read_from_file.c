#include<stdio.h>

int main() {
    int a, b, c;
    FILE *ptr;
    ptr = fopen("file.txt", "r");
    fscanf(ptr, "%d %d %d", &a, &b, &c);
    printf("The value of a, b and c from file is %d %d and %d", a, b, c );
    fclose(ptr);
    return 0;
} 