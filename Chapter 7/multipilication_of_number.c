#include<stdio.h>

int main() {
      int n, mul[11];

      printf("Enter the number\n");
      scanf("%d", &n);

      for (int i = 0; i < 11; i++)
      {
        mul[i] = n*i; // mul[0] = 5x0=0
        printf("%d X %d = %d\n",n, i, mul[i]);
      }
      
    return 0;
} 