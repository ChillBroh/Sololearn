#include <stdio.h>
#include <string.h>

int main (){
	char word[100];
	int i, n, length;
	int palin = 1; //palin = palindrome

	printf("Enter a string to test: ");
	scanf("%s", word);

    	length = strlen(word);
		n = length/2;

	for (i = 0; i < n; i++){
   		 if (word[i] != word[length-1-i]){
       		 palin = 0;
    	 }
	}

	if (palin == 1){
    	printf("%s is a palindrome\n", word);
	}
	else 
  	    printf("%s is not a palindrome\n", word);

	return 0;
}
