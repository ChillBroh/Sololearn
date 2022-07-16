#include<stdio.h>
int main(){
	int n1,n2;
	float div,sub,sum,mul; //n=number
	char op; //op=operator
	
	printf("Enter your number 1:");
	scanf("%d",&n1);
	printf("Enter your operator:");
	scanf("%s",&op);	
	printf("Enter your number 2:");
	scanf("%d",&n2);
	
		switch (op){
			
			case  '+':
				printf("Your answer is : %.2f",(float)n1+n2);
				break;
			case  '-':
				printf("Your answer is : %.2f",(float)n1-n2);
				break;
			case  '*':
				printf("Your answer is : %.2f",(float)n1*n2);
				break;
			case '/' :
				printf("Your answer is : %.2f",(float)n1/n2);
				break;
			default:
				printf("Invalid operator");
	}
		
	return 0;
}
