// Levi Bevins, CIT 150, Ch7 Lab 1

#include <iostream>

using namespace std;

enum objectType { ROCK, PAPER, SCISSORS };

//Function prototypes
void displayRules();
objectType retrievePlay(char selection);
bool validSelection(char selection);
void convertEnum(objectType object);
objectType winningObject(objectType play1, objectType play2);
void gameResult(objectType play1, objectType play2, int& winner);
void displayResults(int gCount, int wCount1, int wCount2);

int main()
{
	//amount of gamese played
	int gameCount; 
	//player 1 wins
	int winCount1; 
	//player 2 wins
	int winCount2; 

	int gamewinner;
	//user response to play
	char response;
	char selection1;
	char selection2;

	//players selection
	objectType play1;
	objectType play2; 

	//set variables
	gameCount = 0;
	winCount1 = 0;
	winCount2 = 0;

	displayRules();

	cout << "Enter Y/y to play the game: ";
	cin >> response; 
	cout << endl;

	while (response == 'Y' || response == 'y') 
	{
		//print, store player selection
		cout << "Player 1 enter your choice: "; 
		cin >> selection1;
		cout << endl;
		cout << "Player 2 enter your choice: ";
		cin >> selection2; 
		cout << endl;

		if (validSelection(selection1)
			&& validSelection(selection2))
		{
			play1 = retrievePlay(selection1);
			play2 = retrievePlay(selection2);
			gameCount++;
			gameResult(play1, play2, gamewinner);

			if (gamewinner == 1) 
				winCount1++;
			else if (gamewinner == 2)
				winCount2++;
		}

		cout << "Enter Y/y to play the game: ";
		cin >> response; 
		cout << endl;
	}
	displayResults(gameCount, winCount1, winCount2);
}

//function displays rules
void displayRules()
{
	cout << " Welcome to the game of Rock, Paper, "
		<< "and Scissors." << endl;
	cout << " This is a game for two players. For each "
		<< "game, each" << endl;
	cout << " player selects one of the objects, Rock, "
		<< "Paper or Scissors." << endl;
	cout << " The rules for winning the game are: " << endl;
	cout << "1. If both players select the same object, it "
		<< "is a tie." << endl;
	cout << "2. Rock breaks Scissors: So player who selects "
		<< "Rock wins." << endl;
	cout << "3. Paper covers Rock: So player who selects "
		<< "Paper wins." << endl;
	cout << "4. Scissors cut Paper: So player who selects "
		<< "Scissors wins." << endl << endl;
	cout << "Enter R or r to select Rock, P or p to select "
		<< "Paper, and S or s to select Scissors." << endl;
}

//verifies if player made a possible play
bool validSelection(char selection)
{
	switch (selection)
	{
	case 'R':
	case 'r':
	case 'P':
	case 'p':
	case 'S':
	case 's':
		return true;
	default:
		return false;
	}
}

//sets selection as object
objectType retrievePlay(char selection)
{
	objectType object;
	switch (selection)
	{
	case 'R':
	case 'r':
		object = ROCK;
		break;
	case 'P':
	case 'p':
		object = PAPER;
		break;
	case 'S':
	case 's':
		object = SCISSORS;
	}
	return object;
}

//gets results for each game
void gameResult(objectType play1, objectType play2,
	int& winner)
{
	objectType winnerObject;
	if (play1 == play2)
	{
		winner = 0;
		cout << "Both players selected ";
		convertEnum(play1);
		cout << ". This game is a tie." << endl;
	}
	else
	{
		winnerObject = winningObject(play1, play2);
		//Output each player's choice
		cout << "Player 1 selected ";
		convertEnum(play1);
		cout << " and player 2 selected ";
		convertEnum(play2);
		cout << ". ";

		//Decide the winner
		if (play1 == winnerObject)
			winner = 1;
		else if (play2 == winnerObject)
			winner = 2;
		//Output the winner
		cout << "Player " << winner << " wins this game."
			<< endl;
	}
}

void convertEnum(objectType object)
{
	switch (object)
	{
	case ROCK:
		cout << "Rock";
		break;
	case PAPER:
		cout << "Paper";
		break;
	case SCISSORS:
		cout << "Scissors";
	}
}

//decides who wins the game
objectType winningObject(objectType play1, objectType play2)
{
	if ((play1 == ROCK && play2 == SCISSORS)||(play2 == ROCK && play1 == SCISSORS))
		return ROCK;
	else if ((play1 == ROCK && play2 == PAPER)||(play2 == ROCK && play1 == PAPER))
		return PAPER;
	else
		return SCISSORS;
}

//displays end of game results 
void displayResults(int gCount, int wCount1, int wCount2)
{
	cout << "The total number of plays: " << gCount
		<< endl;
	cout << "The number of plays won by player 1: "
		<< wCount1 << endl;
	cout << "The number of plays won by player 2: "
		<< wCount2 << endl;
}