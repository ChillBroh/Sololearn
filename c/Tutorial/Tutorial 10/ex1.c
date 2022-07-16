#include<stdio.h>

int main(){
	int number[6] = {21,43,76,98,40};
	int i, num, found = 0, j = 5;
	
	FILE *numbers;
	numbers = fopen("number.dat", "w");
	
	if(numbers == NULL){
		printf("File cannot be open");
		return -1;
	}
	
	for(i = 0; i < 5; i++){
		fprintf(numbers, "%d\n", number[i]);
	}

	printf("Enter number : ");
	scanf("%d", &num);
		
	for(int i = 0; i < 5; i++){
		if(number[i] == num){
			found = 1;
		}
	}
	
	if (found){
		printf("Number is already in the file\n\n");
	}	
	else {
		number[5] = num;
		fprintf(numbers, "%d\n", number[5]);
		j = 6;		
	}

		
	fclose(numbers);
	//read file
	numbers = fopen("number.dat", "r");
	
	if (number == NULL ){
		printf("File cannot be open");
		return -1;	
	}
	
	printf("Numbers in the file : ");
	
	for(int i = 0; i < j; i++){
		fscanf(numbers, "%d", &number[i]);
		printf("%d\t", number[i]);
	}
	
	
	fclose(numbers);
	
	return 0;

}

