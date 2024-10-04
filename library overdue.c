//program to calculate the fine for overdue
/*
Author:ALEX MUNENE BONIFACE
Reg No:CT101/G/23130/24
Date:02/10/2024
*/
#include<stdio.h>
int main(){
	int bookid,duedate,returndate;
	int daysdue;
	float fineamount;
	//user input
	printf("enter the bookid\n:");
	scanf("%d",&bookid);
	printf("enter the duedate\n:");
	scanf("%d",&duedate);
	printf("enter returndate\n:");
	scanf("%d",&returndate);
	//calculate days due using the formula below
	daysdue=returndate-duedate;
	//output info to user
	if(daysdue<=7){
		printf("fineamount=ksh20");
		printf("fineamount:ksh%.2f\n",fineamount);
}
else if(daysdue<=14){
	printf("fineamount=ksh50");
	printf("fineamount:ksh%.2f\n",fineamount);
}else if(daysdue>14){
printf("fineamount=ksh100");
	printf("fineamount:ksh%.2f\n",fineamount);
}
printf("fineamount:ksh%.2f\n",fineamount);
return 0;
 }