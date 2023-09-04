//Me : 
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>

using namespace std;

short Global;
short Player1WonTimes = 0;
short ComputerWonTimes = 0;

int GetRandomNumber(int From, int To)
{
	//Function to generate a random number 
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}

short ReadNumberInRange(string Message, short From, short To)
{
	short Number = 0;
	do
	{
		cout << Message;
		cin >> Number;
		if (Number < From || Number > To)
		{
			cout << "Wrong Input :(\n";
		}

	} while (Number < From || Number > To);

	return Number;
}

short ReadPlayerChoice()
{
	short Choice = ReadNumberInRange("\nYour Choice: [1]:Stone, [2]:Paper, [3]:Scissors ? ", 1, 3);
	return Choice;
}

short GetComputerChoice()
{
	short Choice = GetRandomNumber(1,3);
	return Choice;
}

enum enUserChoice { Stone = 1, Paper = 2, Scissors = 3 };

string PrintChoice(short Choice)
{
	switch ((enUserChoice)Choice)
	{
	case enUserChoice::Stone:
		return "Stone\n";
	case enUserChoice::Paper:
		return "Paper\n";
	case enUserChoice::Scissors:
		return "Scissors\n";
	}
}

string GetFinalWinner(short Player1WonTimes, short ComputerWonTimes)
{
	if (Player1WonTimes > ComputerWonTimes)
	{
		system("color 2F");
		return "[Player1]";
	}
	else if (Player1WonTimes < ComputerWonTimes)
	{
		system("color 4F");
		return "[Computer]";
	}
	else
	{
		system("color 6F");
		return "[No Winner]";
	}

}

struct stGameComponent
{
	short stPlayer1WonTimes = ::Player1WonTimes;
	short stComputerWonTimes = ::ComputerWonTimes;
	short DrawTimes = ::Global - (stPlayer1WonTimes + stComputerWonTimes);
	string FinalWinner = GetFinalWinner(Player1WonTimes, ComputerWonTimes);
};

string RoundWinner(short PlayerChoice, short ComputerChoice)
{
	// [1]:Stone, [2]:Paper, [3]:Scissors
	stGameComponent GameComponent;

	if (PlayerChoice == 2 && ComputerChoice == 1)
	{
		::Player1WonTimes += 1;
		system("color 2F");
		return "[Player1]";
	}
	else if (PlayerChoice == 1 && ComputerChoice == 2)
	{
		::ComputerWonTimes += 1;
		system("color 4F");
		return "\a[Computer]";
	}
	else if (PlayerChoice == 2 && ComputerChoice == 3)
	{
		::ComputerWonTimes += 1;
		system("color 4F");
		return "\a[Computer]";
	}
	else if (PlayerChoice == 3 && ComputerChoice == 2)
	{
		::Player1WonTimes += 1;
		system("color 2F");
		return "[Player1]";
	}
	else if (PlayerChoice == 3 && ComputerChoice == 1)
	{
		::ComputerWonTimes += 1;
		system("color 4F");
		return "\a[Computer]";
	}
	else if (PlayerChoice == 1 && ComputerChoice == 3)
	{
		::Player1WonTimes += 1;
		system("color 2F");
		return "[Player1]";
	}
	else
		system("color 6F");
		return "[No Winner]";
}

void PrintRoundResult(short Rounds, short PlayerChoice, short ComputerChoice)
{
	cout << "\n------------Round [" << Rounds << "]------------\n";
	cout << "Player1 Choice : " << PrintChoice(PlayerChoice);
	cout << "Computer Choice : " << PrintChoice(ComputerChoice);
	cout << "Round Winner : " << RoundWinner(PlayerChoice, ComputerChoice);
	cout << "\n----------------------------------\n\n";
}

void GameBady(short Rounds)
{
	stGameComponent GameComponent;
	

	for (int i = 1; i <= Rounds; i++)
	{
		cout << "\nRound [" << i << "] begins :\n";

		short PlayerChoice = ReadPlayerChoice();
		short ComputerChoice = GetComputerChoice();

		PrintRoundResult(i, PlayerChoice, ComputerChoice);
	}

}

void GameOverHeder()
{
	
	cout << "\t\t\t--------------------------------------------------------------------\n";
	cout << "\t\t\t\t\t\t+++ G A M E  O V E R +++\n";
	cout << "\t\t\t--------------------------------------------------------------------\n";
	cout << "\t\t\t--------------------------- [ Game Results ] -----------------------\n\n";

}

void GameOver(short Rounds)
{
	GameOverHeder();
	stGameComponent GameComponent;
	cout << "\t\t\t\t\t\tGame Rounds        : " << Rounds << endl;
	cout << "\t\t\t\t\t\tPlayer1 Won Times  : " << GameComponent.stPlayer1WonTimes << endl;
	cout << "\t\t\t\t\t\tComputer Won Times : " << GameComponent.stComputerWonTimes << endl;
	cout << "\t\t\t\t\t\tDraw Times         : " << GameComponent.DrawTimes << endl;
	cout << "\t\t\t\t\t\tFinal Winner       : " << GameComponent.FinalWinner << endl;
	cout << "\n\t\t\t---------------------------------------------------------------------\n\n";

}

bool ContinuOrNot()
{
	char ContinuOrNot;
	cout << "Do You Want to Play again (Y/N) ? \n";
	cin >> ContinuOrNot;
	if (ContinuOrNot == 'Y' || ContinuOrNot == 'y')
	{
		return true;
	}
	return false;
}

int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));


	do
	{
		return ;
		short Rounds = ReadNumberInRange("\nHow Many Rounds 1 to 10 ? ", 1, 10);
		::Global = Rounds;

		GameBady(Rounds);
		GameOver(Rounds);

	} while (ContinuOrNot() == true);

	return 0;
}

===============================================================================================

//Prof : 
