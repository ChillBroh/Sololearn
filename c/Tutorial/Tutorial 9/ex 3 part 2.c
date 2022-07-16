#include <stdio.h>
int main(){
	
	int sales[4][5] = {0};
	int sum[5] = {0};
	int i, j, 
	total;
	int  value = 0;
	

	for(i = 0; i < 4; i++){
		
		printf("Enter salesperson %d details:\n", i+1);
		
		for(j = 0; j < 5; j++){
			
			printf("Enter total dollar value for product %d: ", j+1);
			scanf("%d", &value);
			
			sales[i][j] = value;
		}
		printf("\n");
	}	
    
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
