#include<stdio.h>
#include<string.h>
typedef struct{
	int age;
	char name[50];
}human;

int main(){
	human n1 = {10,"nimal"};
	human n2;
	n1.age = 15;
	strcpy(n1.name,"Kamal");
	
	
	
	printf("%d %s", n1.age,n1.name);
	return 0;
}