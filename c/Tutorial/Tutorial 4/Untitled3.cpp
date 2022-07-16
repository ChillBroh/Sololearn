#include<stdio.h>
int main(){
	int n1,n2; //n=number
	char op; //op=operator
	
	printf("Enter your number 1:");
	scanf("%d",&n1);
	printf("Enter your operator:");
	scanf("%s",&op);	
	printf("Enter your number 2:");
	scanf("%d",&n2);

	
	if (op=='+'||op=='-'||op=='*'||op=='/'){
		
		if (op=='+'){
			printf("Answer is %.2f",(float)n1+n2);
		}
		else if (op=='-'){
			printf("Answer is %.2f",(float)n1-n2);
		}
		else if(op=='*'){
			printf("Answer is %.2f",(float)n1*n2);
		}
		else {
			printf("Answer is %.2f",(float)n1/n2);
		}
		
		
	}
	else{
		printf("Invalid operator!");
	}
}
