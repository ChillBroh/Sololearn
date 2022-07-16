#include<stdio.h>

int main(){
	int i,j;
	int array1[2][3];
	
	for (i = 0; i < 2; i++){
		for (j=0 ; j < 3; j++){
			printf("Enter values : ");
			scanf("%d", &array1[i][j]);
		}
	}
	
	for (i = 0; i < 2; i++){
		for (j=0 ; j < 3; j++){
			printf("%d\t", array1[i][j]);
		}
		printf("\n");
	}
}
	