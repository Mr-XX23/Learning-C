#include<stdio.h>
#include<conio.h>

int slice(char *str, int m , int n);

int main() {
    char st[] = "Hello_World";
    slice(st, 2, 5);
    printf("%s", st);
    return 0; 
}

int slice(char *str, int m , int n) {
    int i = 0;
    while ( ( m + i ) < n)
    {
        str[i] = str[i+m];
        i++;
    }
    str[i] = '\0';

}
