#include<stdio.h>
int main(){
	
	int duration,num; //duration=time period, num = number of times
	float total,add; //total = total amount , add=addiction
	char time;//time = peaktime or not
	
	printf("Enter the Time period in seconds:");;
	scanf("%d",&duration);
	printf("Enter the number of times for advertisement:");
	scanf("%d",&num);
	printf("Peak time or not (Y/N):");
	scanf(" %c",&time);
	
	if (duration<30){
		switch (time){
			case 'Y':
				add = 10000.0 *num *10/100.0;
				total = 10000.0 * num + add;
				printf("Total amount to be paid : %.2f\n",total);
				break;
			case 'N':
				total = 10000.00 * num ;
				printf("Total amount to be paid : %.2f\n",total);
				break;
			default :
				printf("Invalid input!");
		}

			
			
	} 
	else if (duration>=30 && duration<=60){
		switch (time){
			case 'Y':
				add = 15000.0 * num * 10/100.0;
				total = 15000.0 * num +add;
				printf("Total amount to be paid : %.2f\n",total);
				break;
			case 'N':
				total = 15000.0* num ;
				printf("Total amount to be paid : %.2f\n",total);
				break;
			default :
				printf("Invalid input!");
				
		}
		
	}
	else if (duration>60){

		switch (time){
			case 'Y':
				add = 20000.0 * num * 10/100.0;
				total = 20000.0 * num + add;
				printf("Total amount to be paid : %.2f\n",total);
				break;
			case 'N':
				total = 20000.0 * num ;
				printf("Total amount to be paid : %.2f\n",total);
				break;
			default :
				printf("Invalid input!");
		}

		
	}
	return 0;
}