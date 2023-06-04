#include<stdio.h>
#include<string.h>

int main() {
    char str1[50];
    char str2[50];
    char c;
    int i = 0;

    printf("Enter the first String \n");
    scanf("%s", str1);

    printf("Enter the second String \n");
    while (c != '\n')
    {
        fflush(stdin);
        scanf("%c", &c);
        str2[i] = c;
        i++;
    }
    str2[i-1] = '\0';
    
    printf("The value of str1 is %s\n", str1);
    printf("The value of str2 is %s\n", str2);
  
    // printf("strcmp fpor thses strings returs %d", strcmp(str1, str2));

    return 0;
}