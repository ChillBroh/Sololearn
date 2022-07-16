/*IT211889944
 Madusanka G.K.I
 group 10.2
 Malabe*/
#include<stdio.h>
int main(){
	int units,customer;
	float bill,add;
	
	printf("Customer type (1-Domestic/2-Samurdhi):");
	scanf("%d",&customer);
	printf("Number of units:");
	scanf("%d",&units);
	
	if (customer == 1 ||customer == 2){
		if (customer ==1 && units <=100||customer == 2 && units <=100){
			bill = 	10*units;
		}
		else if (customer == 1 && units > 100){
			bill= 100*10 + 30*(units-100);
			add = bill * 20/100.0;
			bill = add+bill;
		}	
		else if (customer==2 && units>100){
			bill = 10*100;
			bill = bill + 30*(units-100);
					
		}
		printf("Monthly charge : Rs.%.2f",bill);
		
	}
	else 
		printf("Invalid customer type");
		
	return 0;
	
}