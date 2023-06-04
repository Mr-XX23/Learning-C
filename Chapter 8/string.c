#include<stdio.h>

int main() {

    // actually works
    char str[] = "Rohan";
    char *ptr = str;
    while (*ptr != '\0')
    {
        printf("%c", *ptr );
        ptr++;
    }

    // // convinent way
    char nva[] = "Rohan";
    printf("%s", nva );
    return 0;

    // taking input
    char name[20];
    printf("Enter the name\n");
    scanf("%s", name);
    printf("NAME: %s", name);

}