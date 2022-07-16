#include <stdio.h>
#define add(x,y)x+y

int main (){
	printf("%d\n",5*(add(4,3)));
	printf("%s\n",__DATE__);
	printf("%s", __TIME__);
	return 0;
}