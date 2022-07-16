#include<stdio.h>
#include<math.h>
int add(int a,int b);
int multiply(int a , int b );
int square(int x);

int main(){
	int ans;	
	ans=square(add(multiply(3,4),multiply(5,7)));
	printf("%d",ans);	
	return 0;
		
}
int multiply (int a, int b){
	return a*b;
}
int add (int a, int b){
	return a+b;
}
int square (int x){
	return pow(x,2);
}



	