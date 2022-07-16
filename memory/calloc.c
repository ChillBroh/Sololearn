#include<stdio.h>
#include<stdlib.h>

typedef struct{
	int num;
	char *info; //with pointer we can use any nymber of characters
}record;

int main(){
	record *recs;
	int num_recs = 2;
	int k;
	char str[]= "This is infromation";
	
	recs = calloc(num_recs, sizeof(record)); //allocate blocks of memory within a contiguous block memory for an arry of struct elements
	if(recs != NULL){
		for(k = 0; k < num_recs; k++){
			(recs+k)->num = k;
			(recs+k)->info = malloc(sizeof(str));
			strcpy((recs+k)->info,str);
					printf("%d . %s\n",(recs+k)->num+1,(recs+k)->info);
		}

	}
	//also with realloc we can expand the given memeory
	/*   ptr= malloc(10 * sizeof());
	ptr = realloc(ptr,100 * sizeof()); */

	
}