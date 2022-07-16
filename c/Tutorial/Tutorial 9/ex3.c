#include <stdio.h>

int main(){
	
	int sales[4][5] = {0};
	int sum[5] = {0};
	int i, j, person, product, total;
	int  value = 0;
	
		printf("Enter salesperson number (1 - 4) *Enter -1 for exit* :");
		scanf("%d", &person);
		
	do {
		
		printf("Enter product number (1 - 5):");
		scanf("%d", &product);
		printf("Enter total dollar value for that product : ");
		scanf("%d", &value);
		
		sales[person - 1][product - 1] = value;
		
		printf("Enter salesperson number (1 - 4) *Enter -1 for exit* :");
		scanf("%d", &person);
		
	}while(person != -1);
	
	printf("\n");
	
	// calculate sum of products and print
	for(i = 0; i < 5; i++){
		for(j = 0; j < 4; j++){
			
			total += sales[j][i];
			sum[i] = total; 
		}
	printf("Total sales for product %d is = %d$\n",i+1, sum[i]);
	total = 0;
	}	
    
    return 0;
}
