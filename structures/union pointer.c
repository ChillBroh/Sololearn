#include<stdio.h>
#include<string.h>
typedef union{
	int age;
	char name[50];
}Student;

int main(){
	Student s1;
	Student *ptr;
	ptr = &s1;
	
	ptr->age = 10;
	strcpy(ptr->name,"saman");
	

	printf("%d\n",s1.age);
		printf("%s\n",s1.name);
	
	return 0;
}