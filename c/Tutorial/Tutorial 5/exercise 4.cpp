#include<stdio.h>
int main(){
	int i,j,k;
	
	for(i=0;i<=7;i++){
		for(j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
	}
	for (i=7;i>=1;i=i-2){
		for (k=1;k<=i;k++){
			printf("*");
		}
		printf("\n");
	}
	return 0;	
}