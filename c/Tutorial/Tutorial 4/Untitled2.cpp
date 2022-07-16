#include<stdio.h>
int main(){
	char x;
	float balance,amount,total;
printf("Enter your transection type (Withdraw - w, Deposit - d):");
   	 x= getchar();

   	if (x=='w'||x=='W'||x=='d'||x=='D') {
    		printf("\nEnter your bank balance :");
    		scanf("%f",&balance);

     		if (x=='d'||x=='D'){
				printf("You have selected to deposit money\n");
				printf("Enter your deposit amount :");
        		scanf("%f",&amount);
         		total = (float)balance+amount;
        		printf("\nYour new balance is : %.2f",total);
        	} 
			else {
				printf("You have selected to withdraw money\n");
				printf("Enter your withdraw amount :");
       			scanf("%f",&amount);
       			total = (float)balance-amount;
        			printf("\nYour new balance is : %.2f",total);
			}
		} 
		else { 
			printf("\nYou have selected an invalid transection type");
		}
    
	return 0;
}

