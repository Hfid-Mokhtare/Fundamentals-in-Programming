//Prof : 
#include <iostream>
#include <cstdlib>

using namespace std;

enum enGameChoice { Stone = 1, Paper = 2, Scissors = 3 };
enum enWinner { Player1 = 1, Computer = 2, Draw = 3 };

struct stRoundInfo 
{
	short RoundNumber = 0;
	enGameChoice Player1Choice;
	enGameChoice ComputerChoice;
	enWinner Winner;
	string WinnerName = "";

};

struct stGameResults
{
	short GameRounds = 0;
	short Player1WonTimes = 0;
	short ComputerWonTimes = 0;
	short DrawTimes = 0;
	enWinner GameWinner;
	string WinnerName = "";

};

short GetRandomNumber(int From, int To)
{
	//Function to generate a random number 
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}

string WinnerName(enWinner Winner)
{
	string arrWinnerName[3] = { "Player1","Computer","No Winner" };
	return arrWinnerName[Winner - 1];
}

enWinner WhoWonTheRound(stRoundInfo RoundInfo)
{

	if (RoundInfo.Player1Choice == RoundInfo.ComputerChoice)
	{
		return enWinner::Draw;
	}

	switch (RoundInfo.Player1Choice)
	{
	case enGameChoice::Stone:
		if (RoundInfo.Player1Choice == enGameChoice::Paper)
		{
			return enWinner::Computer;
		}
		break;

	case enGameChoice::Paper:
		if (RoundInfo.Player1Choice == enGameChoice::Scissors)
		{
			return enWinner::Computer;
		}
		break;

	case enGameChoice::Scissors:
		if (RoundInfo.Player1Choice == enGameChoice::Stone)
		{
			return enWinner::Computer;
		}
		break;
	}

	//if you reach here then player1 is the winner
	return enWinner::Player1;
}

string ChoiceName(enGameChoice Choice)
{
	string arrGameChoice[3] = { "Stone","Paper", "Scissors" };
	return arrGameChoice[Choice - 1];
}

void SetWinnerScreenColor(enWinner Winner)
{
	switch (Winner)
	{
	case enWinner::Player1:
		system("color 2F");//turn screem to Green
		break;
	case enWinner::Computer:
		system("color 4F");//turn screem to Red
		cout << "\a";
		break;
	default:
		system("color 6F");//turn screem to Yellow
		break;
	}

}

void PrintRoundResults(stRoundInfo RoundInfo)
{

	cout << "\n------------Round [" << RoundInfo.RoundNumber << "]------------\n";
	cout << "Player1 Choice  : " << ChoiceName(RoundInfo.Player1Choice) << endl;
	cout << "Computer Choice : " << ChoiceName(RoundInfo.ComputerChoice) << endl;
	cout << "Round Winner    : [" << RoundInfo.WinnerName<<"]";
	cout << "\n----------------------------------\n\n";

	SetWinnerScreenColor(RoundInfo.Winner);
}

enWinner WhoWonTheGame(short Player1WonTimes, short ComputerWonTimes)
{

	if (Player1WonTimes > ComputerWonTimes)
		return enWinner::Player1;
	else if (ComputerWonTimes > Player1WonTimes)
		return enWinner::Computer;
	else
		return enWinner::Draw;

}

stGameResults FillGameResults(short GameRounds, short Player1WonTimes, short ComputerWonTimes, short DrawTimes)
{
	stGameResults GameResults;

	GameResults.GameRounds = GameRounds;
	GameResults.Player1WonTimes = Player1WonTimes;
	GameResults.ComputerWonTimes = ComputerWonTimes;
	GameResults.DrawTimes = DrawTimes;
	GameResults.GameWinner = WhoWonTheGame(Player1WonTimes, ComputerWonTimes);
	GameResults.WinnerName = WinnerName(GameResults.GameWinner);

	return GameResults;
}

enGameChoice ReadPlayerChoice()
{
	short Choice = 1;
	do
	{
		cout << "\nYour Choice: [1]:Stone, [2]:Paper, [3]:Scissors ? ";
		cin >> Choice;

	} while (Choice < 1 || Choice>3);

	return (enGameChoice)Choice;
}

enGameChoice GetComputerChoice()
{
	return  (enGameChoice)GetRandomNumber(1, 3);
}

stGameResults PlayGame(short HowManyRounds)
{
	stRoundInfo RoundInfo;
	short Player1WonTimes = 0, ComputerWonTimes = 0, DrawTimes = 0;

	for (int GameRound = 1; GameRound <= HowManyRounds; GameRound++)
	{
		cout << "\nRound [" << GameRound << "] begins :\n";
		RoundInfo.RoundNumber = GameRound;
		RoundInfo.Player1Choice = ReadPlayerChoice();
		RoundInfo.ComputerChoice = GetComputerChoice();
		RoundInfo.Winner = WhoWonTheRound(RoundInfo);
		RoundInfo.WinnerName = WinnerName(RoundInfo.Winner);
		

		//Increase Won/Draw counters
		if (RoundInfo.Player1Choice == enWinner::Player1)
			Player1WonTimes++;
		else if (RoundInfo.Player1Choice == enWinner::Computer)
			ComputerWonTimes++;
		else
			DrawTimes++;

		PrintRoundResults(RoundInfo);
	}

	return FillGameResults(HowManyRounds, Player1WonTimes, ComputerWonTimes, DrawTimes);

}

string Tabs(int Number)
{
	string t = "";
	for (int i = 1; i < Number; i++)
	{
		t += "\t";
		cout << t;
	}
	return t;
}

void ShowGameOverScreen()
{
	
	cout << Tabs(2)<<"--------------------------------------------------------------------\n";
	cout << Tabs(2)<<"                   +++ G a m e  O v e r +++\n";
	cout << Tabs(2)<<"--------------------------------------------------------------------\n";
}

void ShowFinalGameResult(stGameResults GameResults)
{
	
	cout << Tabs(2) << "--------------------------- [ Game Results ] -----------------------\n\n";
	cout << Tabs(2) << "Game Rounds        : " << GameResults.GameRounds << endl;
	cout << Tabs(2) << "Player1 Won Times  : " << GameResults .Player1WonTimes<< endl;
	cout << Tabs(2) << "Computer Won Times  : " << GameResults.ComputerWonTimes << endl;
	cout << Tabs(2) << "Draw Times         : " << GameResults.DrawTimes << endl;
	cout << Tabs(2) << "Final Winner       : " << GameResults.GameWinner << endl;
	cout << Tabs(2) << "---------------------------------------------------------------------\n\n";

	SetWinnerScreenColor(GameResults.GameWinner);

}

short ReadHowManyRounds()
{
	short GameRounds = 0;
	do
	{
		cout << "How Many Rounds 1 to 10 ? \n";
		cin >> GameRounds;
		

	} while (GameRounds < 1 || GameRounds > 10);

	return GameRounds;
}

void ResetScreen()
{
	system("color 0F");
	system("cls");
}

void StartGame() 
{
	char PlayAgain = 'Y';

	do
	{
		ResetScreen();
		stGameResults GameResults = PlayGame(ReadHowManyRounds());
		ShowGameOverScreen();
		ShowFinalGameResult(GameResults);

		cout << "Do You Want to Play again (Y/N) ? \n";
		cin >> PlayAgain;

	} while (PlayAgain == 'Y' || PlayAgain == 'y');
}

int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	StartGame();

	

	return 0;
}
