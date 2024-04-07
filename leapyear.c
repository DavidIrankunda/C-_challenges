#include<stdio.h>

int main(){
	int year;
	
	printf("Enter a Year : ");
	scanf("%d",&year);
	
	if(year % 400 == 0 ){
		printf("%d Year is Leap", year);
	}else if(year % 100 ==0 ){
		printf("%d Year is not] Leap", year);
	}else if( year % 4 == 0){
		printf("%d Year is Leap", year);
	}else{
		printf("%d Year is not Leap", year);
	}
	return 0;
}