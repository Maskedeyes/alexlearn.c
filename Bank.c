//Bank loan application
/*
Author:ALEX MUNENE BONIFACE
Reg NoCT101/G/23130/24:
Date:1/10/2024
*/
#include<stdio.h>

int main(){
	int age;
	float income;
	//output
	printf("Enter your age: ");
	scanf("%d",&age);
	
	printf("Enter annual income(in KSH): ");
	scanf("%f",&income);
	
	//Determine if customer qualifies for a loan
	if(age>=21&income>=21000){
		printf("Congratulations you qualify for a loan.");
    }else{
    	printf("Ufortuanately,we are unable to offer you a loan at this time");
	}
	
	return 0;
	}