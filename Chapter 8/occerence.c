#include<stdio.h>

int occernce(char *str, char c) {
    int count = 0;
    while (*str != '\0')
    {
        if (*str == c ) {
            count++;
        }
        str++;
    }
    return count;
    
}

int main() {
    char name[20];
    printf("Enter the name\n");
    gets(name);
    int value = occernce(name, 'r');
    printf("Occernce : %d", value);
}




// #include<stdio.h>

// int occernce(char *str, char c) {
//     int count = 0;
//     while (*str != '\0')
//     {
//         if (*str == c ) {
//             printf("The character %c is present\n", c);
//             break;
//         } else {
//             printf("The character is %c not present\n", c);
//             break;
//         }
//         str++;
//     }
//     return 0;
    
// }

// int main() {
//     char name[20];
//     char count[20];
//     printf("Enter the name\n");
//     gets(name);
//     occernce(name, 'r');
// }