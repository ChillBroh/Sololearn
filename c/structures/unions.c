#include<stdio.h>
#include<string.h>

union student{
	int age;
	char name[10];
}; //same as structure. but give same location to every member and one member override other one. so cannot access to past members

int main(){
	union student s1;
	
	s1.age = 10;
	strcpy(s1.name,"kamal"); //age member overrided by name member. so now age has only a garbage value
	
	printf("%d\n",s1.age);
	printf("%s\n",s1.name);
	
}

