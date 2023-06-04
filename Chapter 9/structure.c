#include<stdio.h>
#include<string.h>

struct employee {
    int ID;
    float salary;
    char name[50];
};

int main() {
    struct employee e1;
       e1.ID = 1;
       e1.salary = 1000;
        //e1.name = "Rohan"; ==> Won't works
        strcpy(e1.name, "Rohan");

    printf("%d\n", e1.ID);
    printf("%f\n", e1.salary);
    printf("%s\n", e1.name);

}