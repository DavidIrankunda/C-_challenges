#include<stdio.h>
int main(){
int a, b;

 	printf("enter first number : ");
	scanf("%d",&a);
	printf("enter second number :");
	scanf("%d",&b);
	
	if(a>b){
		printf("The first number is largest. ");
	}else if(b>a){
		printf("The second number is largest ");
	}else{
		printf ("number are equal");
		
	}
	
	return 0;
}