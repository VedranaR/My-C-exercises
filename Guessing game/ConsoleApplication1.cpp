
#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int winningNum = 12;
	int guessNum = 0;
	int guessCount = 0;
	int limitGuess = 5;
	bool guessesNoMore = false;

	while (winningNum != guessNum && !guessesNoMore) {
		if (guessCount < limitGuess) {
			cout << "Please enter your guess: ";
			cin >> guessNum;
			guessCount++;
		}
		else
		{
			guessesNoMore = true;
		}
	}
	if (guessesNoMore) {
		cout << "You lose! The winning number was " << winningNum << endl;
	}
	else {
		cout << "You win! The winning number was " << winningNum << endl;
	}

	system("pause");
	return 0;
}