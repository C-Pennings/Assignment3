#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(void) {
	return 0;
}

const char* choices[] = {"rock", "paper", "scissors"};

const char* RockPaperScissors(char p1[], char p2[]) {

	//check for invalid inputs
	bool isvalidP1 = false;
	bool isvalidP2 = false;
	for (int i = 0; i < 3; i++) {
		if (strcmp(choices[i], p1) == 0) {
			isvalidP1 = true;
		}
		if (strcmp(choices[i], p2) == 0) {
			isvalidP2 = true;
		}
	}
	if (isvalidP1 == false || isvalidP2 == false) { //if invalid, return error
		return "Invalid";
	}


	return "Invalid";
}
