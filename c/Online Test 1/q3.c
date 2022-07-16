#include<stdio.h>
int main(){
	
	int num;//num = number of people
	char itemcode,type; //type=loyality type
	float total,bill,discount;
	
	printf("Enter YOur itrm code N=noodles, B=Burger, F=Fried rice:");
	scanf(" %c",&itemcode);
	printf("Enter number of people:");
	scanf(" %d",&num);
	printf("Are you a loyality customer?(Y/N):");
	scanf(" %c",&type);
	
	if (type=='Y'){
		switch (itemcode){
			case 'N' :
				bill = 760.0*num;
				discount=bill*20/100.0;
				total = bill - discount;
				printf("Your discount is Rs.%.2f\n",discount);
				printf("Your bill amount is Rs.%.2f",total);
				break;
			case 'B':
				bill = 550.0*num;
				discount=bill*20/100.0;
				total = bill - discount;
				printf("Your discount is Rs.%.2f\n",discount);
				printf("Your bill amount is Rs.%.2f",total);
				break;	
			case 'F':
				bill = 890.0*num;
				discount=bill*20/100.0;
				total = bill - discount;
				printf("Your discount is Rs.%.2f\n",discount);
				printf("Your bill amount is Rs.%.2f",total);
		}
	}
	else if (type=='N'){
		switch (itemcode){
			case 'N' :
				bill = 760.0*num;
				discount=bill*10/100.0;
				total = bill - discount;
				printf("Your discount is Rs.%.2f\n",discount);
				printf("Your bill amount is Rs.%.2f",total);
				break;
			case 'B':
				bill = 550.0*num;
				discount=bill*10/100.0;
				total = bill - discount;
				printf("Your discount is Rs.%.2f\n",discount);
				printf("Your bill amount is Rs.%.2f",total);
				break;	
			case 'F':
				bill = 890.0*num;
				discount=bill*10/100.0;
				total = bill - discount;
				printf("Your discount is Rs.%.2f\n",discount);
				printf("Your bill amount is Rs.%.2f",total);
		}
		
	}else 
		printf("Invalid loyality type!");
		
	return 0;
}