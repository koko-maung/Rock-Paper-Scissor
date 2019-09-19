#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int attempt;
int bot;


int randomGen() {
	return rand() % 3;
}
bool WL() {
	if ((attempt == 0 && bot == 1) || (attempt == 1 && bot == 2) || (attempt == 2 && bot == 0)) {
		return true;
	}
	return false;
}
void messageYou() {
	switch (attempt)
	{
	case 0:
		cout << "You      (Rock)" << endl;
		break;
	case 1:
		cout << "You      (Paper)" << endl;
		break;
	case 2:
		cout << "You      (Scissor)" << endl;
		break;
	}
}
void messageBot() {
	switch (bot)
	{
	case 0:
		cout << "Computer (Rock)" << endl;
		break;
	case 1:
		cout << "Computer (Paper)" << endl;
		break;
	case 2:
		cout << "Computer (Scissor)" << endl;
		break;
	}
}

void printLine() {
	cout << "---------------------------" << endl;
}




int main() {
	while (1) {
		srand((unsigned)time(NULL));
		cout << "Rock(0), Paper(1), Scissor(2)? \n|>>>>>>>>>";
		cin >> attempt;
		if (attempt == 0 || attempt == 1 || attempt == 2) {
			bot = randomGen();
			messageYou();
			messageBot();
			if (attempt == bot) {
				cout << "Its a tie!" << endl;
				printLine();
			}
			else if (WL() == true) {
				cout << "You Lose! Try Again!" << endl;
				printLine();
			}
			else if (WL() == false) {
				cout << "You Win! Next Round!" << endl;
				printLine();
			}
		}
		else {
			cout << "Wrong input" << endl;
			printLine();
			return 0;
		}
			
	}
}
