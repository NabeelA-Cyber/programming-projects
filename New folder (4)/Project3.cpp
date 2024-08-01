#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int getUserChoice();
int getComputerChoice();
void determineWinner(int, int);
void displayChoice(int);
void showMenu();

const int ROCK = 1,
			PAPER = 2,
			SCISSORS = 3;
int main()
{
	int userGuess, compGuess;

	while (true) {
		userGuess = getUserChoice();
		if (userGuess == ROCK) cout << "You selected ROCK\n";
		else if (userGuess == PAPER) cout << "You selected PAPER\n";
		else if (userGuess == SCISSORS) cout << "You selected SCISSORS\n";
		else exit(0);
	
		compGuess = getComputerChoice();
		displayChoice(compGuess);
		determineWinner(userGuess, compGuess);
	}
	return 0;
}
int getUserChoice() {
	int choice;
	showMenu();
	cin >> choice;
	while ((choice < 1) || (choice > 4)) {
		cout << "Must choose 1-4!" << endl << endl
			<< "Your guess: ";
		cin >> choice;
	}
	return choice;
}

int getComputerChoice() {
	unsigned seed = time(0);
	srand(seed);
	int choice = (rand() % (3)) + 1;
	return choice;
}

void determineWinner(int user, int comp) {
	
	if (user != comp) {
		
		// win
		
		if ((user == SCISSORS) && (comp == PAPER)) {
			cout << "Scissors cut paper. You Win!" << endl << endl;
		}
		if ((user == PAPER) && (comp == ROCK)) {
			cout << "Paper covers rock. You Win!" << endl << endl;
		}
		
		if ((user == ROCK) && (comp == SCISSORS)) {
			cout << "Rock breaks scissors. You Win!" << endl << endl;
		}
		
		// lose
		if ((comp == SCISSORS) && (user == PAPER)) {
			cout << "Scissors cut paper. You Lose!" << endl << endl;
		}
		if ((comp == PAPER) && (user == ROCK)) {
			cout << "Paper covers rock. You Lose!" << endl << endl;
		}
		if ((comp == ROCK) && (user == SCISSORS)) {
			cout << "Rock breaks scissors. You Lose!" << endl << endl;
		}
	}
	else cout << "tie\n\n";
	return;
}
	
void displayChoice(int compChoice) {

	if (compChoice == ROCK) cout << "Computer selected ROCK\n";
	else if (compChoice == PAPER) cout << "Computer selected PAPER\n";
	else if (compChoice == SCISSORS) cout << "Computer selected SICSSORS\n";
}
		
void showMenu()
{
	cout << "1 - Rock" << endl
		<< "2 - Paper" << endl
		<< "3 - Scissors" << endl
		<< "4 - Quit" << endl
		<< "Your guess: ";
}
