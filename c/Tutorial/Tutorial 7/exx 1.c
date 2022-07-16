#include<stdio.h>
#include<assert.h>

int qualityPoints(float x);

int main(){
	float avg;
	int point;
	
	assert(qualityPoints(100) == 4);
	assert(qualityPoints(95) == 4);
	assert(qualityPoints(90) == 4);
	
	assert(qualityPoints(89) == 3);
	assert(qualityPoints(85) == 3);
	assert(qualityPoints(80) == 3);
	
	assert(qualityPoints(79) == 2);
	assert(qualityPoints(75) == 2);
	assert(qualityPoints(70) == 2);
	
	assert(qualityPoints(69) == 1);
	assert(qualityPoints(65) == 1);
	assert(qualityPoints(60) == 1);
	
	assert(qualityPoints(59) == 0);
	
	printf("Quality Function is working correctly");

	
	return 0;
}

int qualityPoints(float x){
	
	if (x >= 90 && x <= 100) {
		return 4;
	}
	else if (x >= 80 && x <= 89){
		return 3;
	}
	else if (x >= 70 && x <= 79){
		return 2;
	}
	else if (x >= 60 && x <= 69){
		return 1;
	}
	else if (x < 60){
		return 0;
	}
	
}