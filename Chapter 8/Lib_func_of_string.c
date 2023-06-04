#include<stdio.h>
#include<string.h>

int main() {
    char fname[50] = "Rohan";
    char lname[50] = "Balami";

    // copy
    // char fulname[20];
    // strcpy(fulname, fname);
    // printf("Fullname is: %s and length of fullname is : %d", fulname, strlen(fulname));

    // // concatinate
    // strcat(fname, lname);
    // printf("Fullname is: %s", fname);

    // Comparison
    int val = strcmp(fname, lname);
    printf("Now the value is %d", val);


}