#include<stdio.h>

	int main (){
		int Math , chemistry , computer , total , avg;
		
		printf("Enter the marks of math: ");
		scanf("%d", &Math);
		printf("Enter the marks of chemistry: ");
		scanf ("%d", &chemistry);
		printf("Enter the marks of computer");
		scanf("%d", &computer);
		
		total = Math + chemistry + computer;
		avg = total / 3;
		
		printf("the sum of 3 subject is : %d" , total );
		printf("the average of 3 subject is : %d" ,avg);
		
		return 0;
	
}
