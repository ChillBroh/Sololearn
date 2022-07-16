#include<stdio.h>
#include<assert.h>
#include<math.h>

double hypotenuse(double s1, double s2); //s1 = side 1, s2 = side 2

int main(){
	double b,c; // b=side 1, c=side 2, 

	
	assert(fabs(hypotenuse(3.0, 4.0) == 5.0));
	assert(fabs(hypotenuse(5.0, 12.0) == 13.0));
	assert(fabs(hypotenuse(8.0, 15.0) == 17.0));	

	printf("Hypotenuse function is working correctly");
	return 0;
}

double hypotenuse(double s1, double s2){
	
	return fabs(sqrt(pow(s1,2) + pow(s2,2)));

}
