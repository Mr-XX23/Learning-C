#include<stdio.h>

int main() {
    int i = 34; 
    int *j = &i;
    printf("The value of i %d\n", i); // 34
    printf("The value of i %d\n", *j); // *j = *(&i)
    printf("The address of i %u\n", &i); // address of i
    printf("The address of i %u\n", j); // address of i
    printf("The address of j %u\n", &j); // address of j
    printf("The value of j %u\n", *(&j)); // value of j = address of i
    return 0;
}