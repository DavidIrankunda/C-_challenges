#include<stdio.h>

int main(){
	int avg ,  math, english, comminication , ict;
	printf("the marks of math");
	scanf("%d", &math);
	
	printf("the marks of English");
	scanf("%d", &english);
	
	
	printf("the marks of cominication ");
	scanf("%d", &comminication);
	
	
	printf("the marks of ICT");
	scanf("%d", &ict);
	

//	scanf("%d%d%d%d", &math, &english , &comminication , &ict);	


	
	
	avg = (math + english + comminication + ict )/ 4;
	
	printf("the average is %2.f \n", avg);
	
	if(avg >=80){
		printf("\n Grade = A");
	}else if(avg >= 79 ){
		printf("\n Grade = B");
	}else if(avg >= 69){
		printf("\n Grade = C");
	}else if (avg >= 59){
		printf("\n Grade = D");
	}else{
		printf("Fail");
}
	
	return 0;
}