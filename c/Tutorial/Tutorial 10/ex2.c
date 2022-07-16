#include<stdio.h>

int main(){
	char name[20];
	char type;
	int i, c = 0, s = 0 , t = 0;
	
	FILE *patients;
	
	patients = fopen("appointment.dat", "w");
	
	if(patients == NULL){
		printf("This file cannot be open");
		return -1;
	}
	
	for(i = 0; i < 5; i++){
		printf("Enter patient name : ");
		scanf("%s", name);
		printf("Enter appointment type : ");
		scanf(" %c", &type);
		
		fprintf(patients, "%s  %c\n", name, type);
	}
	
	fclose(patients);
	
	patients = fopen("appointment.dat", "r");
	
	if(patients == NULL){
		printf("This file cannot be open");
		return -1;
	}
	
	while(!feof(patients)){

		fscanf(patients,"%c", &type);
		
		if (type == 'C'){
			c++;
		}
		else if (type == 'S'){
			s++;
		}
		else if (type == 'T'){
			t++;
		}		
	}
	printf("\n");
	printf("Appoinment Type              Number of Patient\n"
			"Consulting                         %d\n"
			"Scanning                           %d\n"
			"Testing                            %d\n",c,s,t);
	
	fclose(patients);
	return 0;
}
