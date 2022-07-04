#include <stdio.h>


/**
 * Methode fibonacci berechnet die fibonacci-Zahl einer Zahl (Iterativ)
 */
 
unsigned long main(unsigned long input){

	unsigned long first = 0;
	unsigned long second = 1;
	unsigned long thierd;
	
	
	printf("Enter a number smaller than 1000:\n");
	scanf("%lu",&input);
	printf("\n");


	if(input <= 1){
		printf("%lu", input);
		return 0;
		
	}
    
	while (input >= 1){ 
	
		thierd = first + second;       
		first = second;
		second = thierd;
		printf("%lu\n",thierd);
	
		input = input -1;
	}
}

