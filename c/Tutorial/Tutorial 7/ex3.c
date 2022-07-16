#include<stdio.h>
#include<assert.h>
#include<math.h>

double hypotenuse(double s1, double s2); //s1 = side 1, s2 = side 2
void testHypotenuse(double expected, double actual);

int main(){

	printf("The hypotenuse of the triangle is %.2lf\n", hypotenuse(3, 4));
	testHypotenuse(5,hypotenuse(3,4));
 
	printf("\nThe hypotenuse of the triangle is %.2lf\n",  hypotenuse(5, 12));
	testHypotenuse(13,hypotenuse(5,12));
 
	printf("\nThe hypotenuse of the triangle is %.2lf\n", hypotenuse(8, 15));
	testHypotenuse(17,hypotenuse(8,15));
	return 0;
}

double hypotenuse(double s1, double s2){
	
	return fabs(sqrt(pow(s1,2) + pow(s2,2)));

}
void testHypotenuse(double expected, double actual){
	
	return assert(expected == fabs(actual));
	
}