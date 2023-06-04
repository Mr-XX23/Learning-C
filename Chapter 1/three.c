#include<stdio.h>
#include<conio.h>

int main() {
	
	float eng, math, sci, his, soc, avg;
	
	
	printf("Enter marks of 5 subjects to find your average marks: \n");
	
	scanf("%f%f%f%f%f", &eng, &math, &sci, &his, &soc);
	
	avg = (eng + math + sci + his + soc) / 5;
	
	printf("Your average marks is %f", avg);
	
	
	
	
	return 0;
}
