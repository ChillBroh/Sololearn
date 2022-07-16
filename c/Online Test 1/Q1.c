#include <stdio.h>
int main(){
	int packageno,numofpeople;
	char foodtype;
	float bill;
	
	printf("Enter your package type (1 or 2):");
	scanf("%d",&packageno);
	printf("Enter your Food type: ");
	scanf(" %c" ,&foodtype);
	printf("Enter Number of guests: ");
	scanf("%d",&numofpeople);

	
	if (packageno== 1){
		
		switch (foodtype){
			case 'S': 
					bill = 15000.00+numofpeople*1500.0;
					break;                              
			case 'D': 
					bill = 15000.00+numofpeople*3000.0;
					break;			
			case 'L': 
					bill = 15000.00+numofpeople*2500.0;
					break;	
			default :
					printf("Invalid food type!\n");					
			}
			printf("Package type:%d\n",packageno);
			printf("food type:%c\n",foodtype);
			printf("Number of guests:%d\n",numofpeople);
			printf("Bill amount : Rs.%.2f\n",bill);
			
	}
	else if(packageno==2){
		switch (foodtype){
			case 'S': 
					bill = 30000.00+numofpeople*1500.0;
					break;                              
			case 'D': 
					bill = 30000.00+numofpeople*3000.0;
					break;			
			case 'L': 
					bill = 30000.00+numofpeople*2500.0;
					break;	
			default :
					printf("Invalid food type!\n");					
			}
			printf("Package type:%d\n",packageno);
			printf("food type:%c\n",foodtype);
			printf("Number of guests:%d\n",numofpeople);
			printf("Bill amount :Rs.%.2f\n",bill);
	}
	else 
		printf("Invalid package type");
		
	return 0; 
	
}