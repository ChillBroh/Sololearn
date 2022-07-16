#include<stdio.h>
#include<stdlib.h>


int main(){
	int x = 10;
	int y = 0;
	
	if(y != 0){
		printf("%d",x/y);
	}
	else{
		printf("devisor is 0. program exiting.");
		exit(EXIT_FAILURE); //return value 1
		//or we can use exit(4) to return value 4. if 4 returnd we know that there is a error
	}
}