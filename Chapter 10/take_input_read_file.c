#include<stdio.h>

typedef struct company
    {
        char name[50];
        int salary; 

    } comp;


int main() {
   comp *e1, *e2;
    
    // 1 employee
    printf("Enter the name of the employee 1 ");
    scanf("%s", ((*e1).name));
    printf("Enter the salary of the employee 1 ");
    scanf("%d", &((*e1).salary));

    // 1 employee
    printf("Enter the name of the employee 2 ");
    scanf("%s", ((*e2).name));
    printf("Enter the salary of the employee 2 ");
    scanf("%d", &((*e2).salary));

    FILE *ptr;
    ptr = fopen("Employee_data.txt", "w");
    fprintf(ptr, "1: %s, %d.\n", ((*e1).name), ((*e1).salary));
    fprintf(ptr, "2: %s, %d.\n", ((*e2).name), ((*e2).salary));
    fclose(ptr);
    return 0;
} 