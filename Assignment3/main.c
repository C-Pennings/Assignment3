#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(void) {
	return 0;
}

const char* RockPaperScissors(char p1[], char p2[]) {
	const char* choices[] = { "rock", "paper", "scissors" };

	int P1index = 0;
	int P2index = 0;

	//check for invalid inputs
	bool isvalidP1 = false;
	bool isvalidP2 = false;
	for (int i = 0; i < 3; i++) {
		if (strcmp(choices[i], p1) == 0) {
			isvalidP1 = true;
			P1index = i;
		}
		if (strcmp(choices[i], p2) == 0) {
			isvalidP2 = true;
			P2index = i;
		}
	}
	if (isvalidP1 == false || isvalidP2 == false) { //if invalid, return error
		return "Invalid";
	}

	//check if draw
	if (strcmp(p1, p2) == 0) {
		return "Draw";
	}
	//check P2 win
	if (strcmp(p2, choices[(P1index + 1) % 3]) == 0) {
		return "Player2";
	}

	if (strcmp(p1, choices[(P2index + 1) % 3]) == 0) {
		return "Player1";
	}

	return "Invalid";
}
