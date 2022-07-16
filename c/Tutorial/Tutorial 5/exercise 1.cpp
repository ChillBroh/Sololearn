#include<stdio.h>
int main (){
	int i,sum;
	float avg;

	while (i>=0){
		printf("Enter your number:");
		scanf("%d",&i);
		
		if (i>=0){
			printf("%d\n",i);
			sum = sum + i;
			avg = (float)sum/2;
			printf("Sum is %d\n",sum);
			printf("Average is %.2f\n",avg);
		}
								
	}
	return 0;
}