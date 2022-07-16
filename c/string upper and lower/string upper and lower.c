#include<stdio.h>
#include<string.h>

int main(){
	char name[40];
	
	
	printf("Enter yoour name :");
	fgets(name,40,stdin);
	fputs(name,stdout);
	puts(name);
	
	return 0;
	
}