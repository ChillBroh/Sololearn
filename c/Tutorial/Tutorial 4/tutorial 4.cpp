#include<stdio.h>
int main(){
	int x,p;
	
	printf("Enter your number:");
	scanf("%d",&x);
	
	if (x<0){
		
		p=x*-1;
		printf("Your value is %d",p);
	}else
		printf("Your value is %d",x);
		
	return 0;
}
