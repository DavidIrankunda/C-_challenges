#include<stdio.h>

int main (){
	int area , radius , pi=3.14;
	
	printf("enter the radius number: ");
	scanf("%d", &radius);
	
	area = pi*radius*radius;
	
	printf("the area of cicle is : %d", area);
	
	return 0;
}