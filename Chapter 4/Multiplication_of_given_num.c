// #include<stdio.h>
// #include<conio.h>

// int main() {
//     int multi_num1 = 4, multi_num2 = 5, multi_num3 = 6, i, j;
//     // printf("Enter the first number for multiplication table\n");
//     // scanf("%d", &multi_num1 );
//     // printf("Enter the second number for multiplication table\n");
//     // scanf("%d", &multi_num2 );
//     // printf("Enter the third number for multiplication table\n");
//     // scanf("%d", &multi_num3 );

//     printf("The value are %d, %d and %d\n",multi_num1, multi_num2, multi_num3);
//         for (j = 1; j <= 3; j++)
//         {
//             for (i = 1; i <= 10; i++)
//             {
//                 switch (multi_num1)
//                 {
//                 case 4:
//                     printf("%d x %d = %d\n", multi_num1, i, multi_num1 * i);
//                     continue;
                
//                 default:
//                     break;
//                 }
                
//             }
//         }
        

//     return 0;
// };




#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int nums[3];

    // Ask the user to enter 3 random numbers
    printf("Enter 3 random numbers(FIRST ANY DIGITS NUMBER THEN PRESS 'ENTER' THEN SECOND NUMBER THEN 'ENTER' AND SO ON.......;):\n");

    // Loop to take user's input data
    for (int i = 0; i < 3; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Numbers entered: %d, %d, %d\n", nums[0], nums[1], nums[2]);

    // Display multiplication tables vertically
    for (int i = 1; i <= 10; i++) {
        // Loop to display the multiplication of each number with the current iteration of the outer loop
        for (int j = 0; j < 3; j++) {
            printf("%d x %d = %2d\t", nums[j], i, nums[j]*i);
        }
        printf("\n"); // Start a new line after each row
    }

    return 0;
}
