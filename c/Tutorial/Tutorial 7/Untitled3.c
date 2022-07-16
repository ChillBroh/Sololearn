#include<stdio.h>
#include<assert.h>
#include<math.h>

double hypotenuse(double s1, double s2);
void testHypotenuse();

int main(){
	double b,c; // b=side 1, c=side 2, 

	printf("Enter length of side 1:");
	scanf("%lf", &b);
	printf("Enter length of side 2:");
	scanf("%lf", &c);
	
	void testHypotenuse();
	printf("Hypotenuse of the triangle is : %.2lf",hypotenuse(b,c));
	
	return 0;
}

double hypotenuse(double s1, double s2){
	
	return fabs(sqrt(pow(s1,2) + pow(s2,2)));

}
void testHypotenuse(){
	
	assert(fabs(hypotenuse(3.0, 4.0) - 5.0) <= 0);
	assert(fabs(hypotenuse(5.0, 12.0) - 13.0) <= 0);
	assert(fabs(hypotenuse(8.0, 15.0) - 17.0) <= 0);	
}