#include<stdio.h>
#include<string.h>

typedef struct{
	int age;
	char name[50];
} student;

void update(student *s);
void display(student s);

//get the memory address of s1 as the parameter.this can change the actual values of the variable.can only do with pointer parameters
void update(student *s){
	strcpy(s->name,"kamal");
	s->age = 10;	
}

//get values as the parameter
void display(student s){
	printf("%d %s",s.age,s.name);
}
int main(){
	student s1;
	update(&s1);
	display(s1);
}
