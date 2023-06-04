#include<stdio.h>

int main() {
    int i = 34;
    int *ptr = &i;
    printf("The value of ptr is %u\n", ptr);
    // ptr++; add by 4 byte
    // ptr--; substract by 4 byte
    ptr + 1; // add by 4byte
    ptr - 1; // substrat by 4 byte
    printf("%u %u", ptr + 1, ptr - 1 );
    return 0;
}