#include <string.h>
#include <stdio.h>
// #include "stdlib.h"

int main(int agrc, char* argv[]){

	//Declare Variables 
	char* file_name = argv[1]; //get file name from command line 
	const char extension[5] = ".txt";
	char newString[50]; //what you'll be copying to
	char* return_pointer; //pointer to memory where strstr will return a value to 
	char* pointer = argv[1];

	//check and see that they provided a file 
	if(argc != 2)
		printf("%s\n", "Not enough arguements provided");
	
	//Call strstr() to get the address of where the '.txt' is located
	return_pointer = strstr(file_name,extension);

	int i=0;
	while(pointer != return_pointer){
		newString[i] = *pointer;
		i++;
		pointer++;
	}

	printf("%s\n",newString);

   return 0;
}

