#include<stdio.h>
#include<stdlib.h>

int main(){
	int *ptr;
	ptr = malloc(10);  //allocate 10 size of memory
	
	if(ptr != NULL){
		*(ptr + 2) = 50;
	}
	printf("%d\n",*(ptr+2));
	free(ptr); //deallocate memory
		printf("%d",*(ptr+2));
		
}