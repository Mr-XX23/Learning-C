#include<stdio.h>

int chnageValue(int *a);

int main() {
    int i = 2;
    int d = chnageValue(&i);
    printf("Value of c is %d", d);
    return 0;
}

int chnageValue(int *a) {
    int c = (*a)*10;
    return c;
}