#include<stdio.h>

typedef struct{
	int h;
	int w;
	int l;
}box;

int main(){
	box arr[3]= {{1,2,3},{2,4,6},{3,6,9}};
	int vol;
	
	for(int i = 0; i < 3 ; i++){
		vol = arr[i].h * arr[i].w * arr[i].l;
		printf("vol of box %d is %d\n",i+1,vol);
	}
}