#include<stdio.h>
#include<string.h>

struct employee {
    int ID;
    float salary;
    char name[50];
};

int main() {
    struct employee facebook[100];
    
    facebook[0].ID = 1;
    facebook[0].salary = 305;
    strcpy(facebook[0].name, "Rohan1");

    facebook[1].ID = 2;
    facebook[1].salary = 355;
    strcpy(facebook[1].name, "Rohan2");

    facebook[2].ID = 3;
    facebook[2].salary = 325;
    strcpy(facebook[2].name, "Rohan3");


    // printf("%d\n", e1.ID);
    // printf("%f\n", e1.salary);
    // printf("%s\n", e1.name);

    return 0;

}