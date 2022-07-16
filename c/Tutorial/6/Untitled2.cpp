#include<stdio.h>
int main(){
	
	
	int a=39;
	int b=6;
	{
		 a=26;
		int c=30;
		printf("%d %d %d",a,b,c);
	}
	printf("%d %d ",a,b);
}