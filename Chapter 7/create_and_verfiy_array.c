#include<stdio.h>

int main() {
      int arr[10];
      int *ptr = &arr[0];
      ptr = ptr + 2;
        if (ptr == &arr[2])
        {
           printf("ptr + 2 points to the thrid element ");
        }
        else 
        {
            printf("ptr + 2 points is not to the thrid element ");
        }
    return 0;
} 