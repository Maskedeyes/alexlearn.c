//program to calculate compound interest
/*
Author:ALEX MUNENE BONIFACE
Reg No:CT101/G/23130/24
Date:30/09/2024
*/
//preprocessor directive
#include<stdio.h>
#include<math.h>
int main(){
	float principal,amount,rate,time,compoundinterest;
	int number;
	
	//output
	printf("enter principal\n:");
	scanf("%f",&principal);
	printf("enter rate(in %)\n:");
	scanf("%f",&rate);
	printf("enter time(in years)\n:");
	scanf("%f",&time);
	printf("the number of times interest is compound per year:");
	scanf("%d",&number);
	//calculate the amount using the correct compound interest formula
	amount=principal*pow(1+(rate/(100*number)),number*time);
	compoundinterest=amount-principal;
	printf("amount is:%.2f\n",amount);
	return 0;
}