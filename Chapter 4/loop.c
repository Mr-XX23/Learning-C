#include<stdio.h>
#include<conio.h>

void main() {
    // char a[100] = "I love you \t";

    // int i;
    // while (i>1)
    // {
    // printf(a);i++;
    // system("cls");
    // }

    int skip = 5, i = 0;

    while (i<10) 
    {
        i++;
        if (i != skip)
        {
            continue;
        }
        else {
            printf("%d\n", i);
        }
    };
     

};