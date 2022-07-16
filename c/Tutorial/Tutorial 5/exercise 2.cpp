#include <stdio.h>
int main(){
	int mark,i,total,k; //i=module number
	mark = 0;
	i=1;
	k=1;
	total = 0;
	
	while(k<=3){
		printf("\n*Enter student %d mark*\n\n",k);
		while (i<=4){
			printf("Enter your module %d mark :",i);
			scanf("%d",&mark);
			i++;
			total = total + mark;
	
			if (i==5){
			printf("Total mark is %d\n",total);
			
			}
	
		}i=1,total=0;
		
		k++;
	}
	return 0;
}