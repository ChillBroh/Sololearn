#include<stdio.h>

int main(){
	int a[10];
	int i, j;
	int total =0;
	float mean;
	
	printf("Enter marks between (0 - 20)\n");
	
	for (i = 0; i < 10; i++){	
		printf("Enter marks of student %d = ", i + 1);
		scanf("%d", &a[i]);
		
		if (a[i] >= 0 && a[i] <= 20){
			total += a[i];
			continue;
		}
		else {
			printf("Invalid value! Enter the value again\n");
			--i;
		}
	}
	
	mean = total /10.0;
	
	printf("\n");
	for (j = 0; j < 10; j++){
		printf("Marks of student %d = %d\n", j+1, a[j]); 
	}
	printf("\n");
	printf("mean of marks is %.2f", mean);
	
	return 0;
}