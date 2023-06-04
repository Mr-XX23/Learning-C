#include<stdio.h>

int main() {
    // taking input by gets  /
    char name[20];
    printf("Enter the name\n");
    // scanf("%s", name);
    gets(name);
    puts(name);
    printf("NAME: %s", name);

}