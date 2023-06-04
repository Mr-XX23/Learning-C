// Find who is elder in age.

#include<stdio.h>
#include<string.h>


typedef struct date {
   int day;
   int month;
   int year;
} datev;

void display(datev date1, datev date2) {
    printf("The date of birth of first person is %d/%d/%d and The date of birth of second person is %d/%d/%d \n", date1.day, date1.month, date1.year, date2.day, date2.month, date2.year );
}

int datecmp(datev date1, datev date2) {

    if (date1.year > date2.year ) {
        return 1;
    } else {
        return -1;
    }

    if (date1.month > date2.month ) {
        return 1;
    } else {
        return -1;
    }

    if (date1.day > date2.day ) {
        return 1;
    } else {
        return -1;
    }

}

int main() {

    datev d1, d2;

    //first person
    printf("Enter the first user age\n");
    printf("Year (Ex - 2000 ): \n");
    scanf("%d", &d1.year);
    printf("Month (Ex - Nov - 01): \n");
    scanf("%d", &d1.month);
    printf("Day (Ex - 01): \n");
    scanf("%d", &d1.day);

    // second person
    printf("Enter the second user age\n");
    printf("Year (Ex - 2000 ): \n");
    scanf("%d", &d2.year);
    printf("Month (Ex - Nov - 01): \n");
    scanf("%d", &d2.month);
    printf("Day (Ex - 01): \n");
    scanf("%d", &d2.day);

    display(d1, d2);
    int result = datecmp(d1, d2);
    printf("Result: %d", result);
    return 0;
}