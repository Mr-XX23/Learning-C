#include<stdio.h>

// int sum(int *i, int *j);
// int avg(int *k, int *l);
int sumandavg(int *m, int *n, int *sum, float *avg );


int main() {
    int sum;
    float avg;
    int a = 10;
    int b = 20;
    // int c = sum(&a,&b);
    // int d = avg(&a,&b);
    sumandavg(&a, &b, &sum, &avg);
    // printf("The sum of 10 and 20 is %d and avg of 10 and 20 is %d", c, d);
    printf("The sum of 10 and 20 is %d and avg of 10 and 20 is %f", sum, avg);
    return 0;
}

// int sum(int *i, int *j) {
//     int sum = (*i) + (*j);
//     return sum;
// }

// int avg(int *k, int *l) {
//     int add = (*k) + (*l);
//     int avg = (add)/2;
//     return avg;
// }

int sumandavg(int *m, int *n, int *sum, float *avg ) {
   *sum = (*m) + (*n);
   *avg = (*sum)/2 ;
}