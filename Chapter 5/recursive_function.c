#include<stdio.h>
#include<conio.h>


//// factorial 
//// function decleration
//int factorial( int x );
//
//int main() {
//    // function call
//    int num, f;
//    printf("Enter the number ( factorial )\n");
//    scanf("%d", &num);
//    f = factorial(num); 
//    printf("The value of factorial %d is %d", num, f);
//    return 0;
//}
//
//
//// function definition
//int factorial( int x ) {
//    if ( x == 0 || x == 1 ) {
//        return 1;
//    }
//    else {
//       return x * factorial(x - 1);
//    }
//}


// program to find the fibnoacci series of the given number 

// fucntion delecration
int fib(int);


// function call
int main() {
	int i, n;
	printf("Enter the total terms");
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		printf("%d\t", fib(i));
	}
	getch();
}

int fib(int n) {
	if (n==0 || n==1 ) 
	return (n);
	else return (fib(n-1)+fib(n-2));
}
