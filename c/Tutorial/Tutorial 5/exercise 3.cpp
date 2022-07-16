#include <stdio.h>
int main(){
	int mark,i,total,k,high,highstudent; //i=module number k=student number high=highest mark
	mark = 0;
	i=1;
	k=1;
	total = 0;
	high =0;
	
	while(k<=3){
		printf("\n*Enter student %d mark*\n\n",k);
		i=1,total=0;
		while (i<=4){
			printf("Enter your module %d mark :",i);
			scanf("%d",&mark);
			i++;
			total = total + mark;
	
			if (i==5){
			printf("Total mark is %d\n",total);
			
			}
			if (high<total){
				high=total;
				highstudent=k;
			}
	
		}
		
		k++;
	}
			printf("Highest value is %d\n",high);
			printf("highest student is student %d",highstudent);
	
	return 0;
}