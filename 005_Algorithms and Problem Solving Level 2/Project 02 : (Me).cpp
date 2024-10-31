//Me : 
#include <iostream>
#include <cstdlib>

using namespace std;

enum enQuestionLevel { Easy = 1, Med = 2, Hard = 3, QLMix = 4 };
enum enOperationType { Add = 1, Sub = 2, Mul = 3, Div = 4, OPMix = 5 };
enum enPassOrFail { Pass = 1, Fail = 2 };

struct stQuestionInfo
{
	int Number1 = 0;
	int Number2 = 0;
	int Result = 0;
	int PlayerAnswer = 0;
};

struct stGameResults
{
	stQuestionInfo QuestionInfo;

	short GameQuestions = 0;
	short NumberOfRightAnswers = 0;
	short NumberOfWrongAnswers = 0;

	enQuestionLevel QuestionLevel;
	string ResultQuestionLevel = "";
	enOperationType OperationType;
	string ResultOperationType = "";
	enPassOrFail PassOrFail;
	string ResultOfPassOrFail = "";

};

int ReadThePlayerAnswer()
{
	int PlayerAnswer = 0;

	cin >> PlayerAnswer;
	return PlayerAnswer;
}

short GetRandomNumber(stGameResults GameResults)
{
	//Function to generate a random number
	//QuestionLevel : Easy = 1, Med = 2, Hard = 3, Mix = 4

	int RandNum = 0;

	switch (GameResults.QuestionLevel)
	{
	case enQuestionLevel::Easy:// From 1 to 10
		RandNum = rand() % (10 - 1 + 1) + 1;
		return RandNum;
	case enQuestionLevel::Med:// From 10 to 50
		RandNum = rand() % (50 - 10 + 1) + 1;
		return RandNum;
	case enQuestionLevel::Hard:// From 50 to 100
		RandNum = rand() % (100 - 50 + 1) + 1;
		return RandNum;
	case enQuestionLevel::QLMix:// From 1 to 100
		RandNum = rand() % (100 - 1 + 1) + 1;
		return RandNum;
	}

}

short GetRandomOperationType()
{
	//Function to generate a random OperationType
	//QuestionLevel : Easy = 1, Med = 2, Hard = 3, Mix = 4

	int RandOp = rand() % (5 - 1 + 1) + 1;
	return RandOp;

}

int GetTheQuestionAnswer(stGameResults& GameResults)
{
	//Add = 1, Sub = 2, Mul = 3, Div = 4, Mix = 5

	switch (GameResults.OperationType)
	{
	case enOperationType::Add: // '+'
		GameResults.QuestionInfo.Result = GameResults.QuestionInfo.Number1 + GameResults.QuestionInfo.Number2;
		return GameResults.QuestionInfo.Result;
		break;
	case enOperationType::Sub: // '-'
		GameResults.QuestionInfo.Result = GameResults.QuestionInfo.Number1 - GameResults.QuestionInfo.Number2;
		return GameResults.QuestionInfo.Result;
		break;
	case enOperationType::Mul: // '*'
		GameResults.QuestionInfo.Result = GameResults.QuestionInfo.Number1 * GameResults.QuestionInfo.Number2;
		return GameResults.QuestionInfo.Result;
		break;
	case enOperationType::Div: // '/'
		GameResults.QuestionInfo.Result = GameResults.QuestionInfo.Number1 / GameResults.QuestionInfo.Number2;
		return GameResults.QuestionInfo.Result;
		break;
	}
	
}

void SetWinnerScreenColor(enPassOrFail PassOrFail)
{
	switch (PassOrFail)
	{
	case enPassOrFail::Pass:
		system("color 2F");//turn screen to Green
		break;
	case enPassOrFail::Fail:
		system("color 4F");//turn screen to Red
		cout << "\a";
		break;
	}

}

void PrintQuestionResults(stQuestionInfo QuestionInfo)
{
	//Print Right or Wrong Answer
	if (QuestionInfo.PlayerAnswer == QuestionInfo.Result)
	{
		cout << "Right Answer :-)\n";
		SetWinnerScreenColor(enPassOrFail::Pass);
	}
	else
	{
		cout << "Wrong Answer :-(\n";
		cout << "The Right Answer is : " << QuestionInfo.Result << endl;
		SetWinnerScreenColor(enPassOrFail::Fail);
	}
}

string OperationTypeName(enOperationType OperationType)
{
	//Add = 1, Sub = 2, Mul = 3, Div = 4, Mix = 5
	string arrOperationType[5] = { "Add","Sub","Mul","Div", "Mix" };
	return arrOperationType[OperationType - 1];
}

string QuestionLevelName(enQuestionLevel QuestionLevel)
{
	string arrQuestionLevel[4] = { "Easy","Med","Hard","Mix" };
	return arrQuestionLevel[QuestionLevel - 1];
}

enPassOrFail PassOrFail(int NumberOfRightAnswers, int NumberOfWrongAnswers)
{
	if (NumberOfRightAnswers > NumberOfWrongAnswers)
		return enPassOrFail::Pass;
	else
		return enPassOrFail::Fail;

}

string PassOrFailName(enPassOrFail PassOrFail)
{
	string arrPassOrFail[2] = { "Pass :-)","Fail :-(" };
	return arrPassOrFail[PassOrFail - 1];
}

stGameResults FillGameResults(int HowManyQuestions, enQuestionLevel QuestionLevel, enOperationType OperationType, int NumberOfRightAnswers, int NumberOfWrongAnswers)
{
	stGameResults GameResults;

	GameResults.GameQuestions = HowManyQuestions;
	GameResults.QuestionLevel = QuestionLevel;
	GameResults.ResultQuestionLevel = QuestionLevelName(GameResults.QuestionLevel);
	GameResults.OperationType = OperationType;
	GameResults.ResultOperationType = OperationTypeName(GameResults.OperationType);
	GameResults.NumberOfRightAnswers = NumberOfRightAnswers;
	GameResults.NumberOfWrongAnswers = NumberOfWrongAnswers;
	GameResults.PassOrFail = PassOrFail(NumberOfRightAnswers, NumberOfWrongAnswers);
	GameResults.ResultOfPassOrFail = PassOrFailName(GameResults.PassOrFail);

	return GameResults;
}

enQuestionLevel ReadQuestionLevel()
{
	short Level = 1;
	do
	{
		cout << "\nYour Choice: [1]:Easy, [2]:Med, [3]:Hard, [4]:Mix ? ";
		cin >> Level;

	} while (Level < 1 || Level>4);

	return (enQuestionLevel)Level;
}

enOperationType ReadOperationType()
{
	short OperationType;
	do
	{
		// Add = 1, Sub = 2, Mul = 3, Div = 4, Mix = 5
		cout << "\nYour Choice: [1]:Add, [2]:Sub, [3]:Mul, [4]:Div, [5]:Mix ? ";
		cin >> OperationType;

	} while (OperationType < 1 || OperationType>5);

	if (OperationType == 5)
	{
		OperationType = GetRandomOperationType();
	}

	return (enOperationType)OperationType;
}

char GetOperationTypeSimbole(enOperationType OperationType)
{
	char arrOperationType[4] = { '+', '-', '*', '/' };
	return arrOperationType[OperationType - 1];
}

void PrintTheQuestion(stQuestionInfo GameResults, char OperationTypeSimbol)
{
	cout << endl << GameResults.Number1 << endl;
	cout << GameResults.Number2 << " " << OperationTypeSimbol << endl;
	cout << "\n-----------\n";
}

stGameResults PlayGame(int HowManyQuestions)
{
	stGameResults GameResults;

	GameResults.NumberOfRightAnswers = 0, GameResults.NumberOfWrongAnswers = 0;
	GameResults.QuestionLevel = ReadQuestionLevel();
	GameResults.OperationType = ReadOperationType();

	for (int QuestionsNumber = 1; QuestionsNumber <= HowManyQuestions; QuestionsNumber++)
	{
		
		cout << "\nQuestions [" << QuestionsNumber << "/" << HowManyQuestions << "]\n";
		GameResults.QuestionInfo.Number1 = GetRandomNumber(GameResults);
		GameResults.QuestionInfo.Number2 = GetRandomNumber(GameResults);
		GameResults.QuestionInfo.Result = GetTheQuestionAnswer(GameResults);



		PrintTheQuestion( GameResults.QuestionInfo, GetOperationTypeSimbole(GameResults.OperationType));

		GameResults.QuestionInfo.PlayerAnswer = ReadThePlayerAnswer();

		PrintQuestionResults(GameResults.QuestionInfo);

		if (GameResults.QuestionInfo.PlayerAnswer == GameResults.QuestionInfo.Result)
			GameResults.NumberOfRightAnswers++;
		else
			GameResults.NumberOfWrongAnswers++;
	}

	return FillGameResults(HowManyQuestions, GameResults.QuestionLevel, GameResults.OperationType, GameResults.NumberOfRightAnswers, GameResults.NumberOfWrongAnswers);

}

void ShowFinalGameResult(stGameResults GameResults)
{

	cout << "\n\n--------------------------------------------------\n";
	cout << "Final Result is " << GameResults.ResultOfPassOrFail << endl;
	cout << "--------------------------------------------------\n";
	cout << "Number of Questions : " << GameResults.GameQuestions << endl;
	cout << "Question Level      : " << GameResults.ResultQuestionLevel << endl;
	cout << "Operation Type      : " << GameResults.ResultOperationType << endl;
	cout << "Number Of Right Answers : " << GameResults.NumberOfRightAnswers << endl;
	cout << "Number Of Wrong Answers : " << GameResults.NumberOfWrongAnswers << endl;
	cout << "--------------------------------------------------\n\n";

	SetWinnerScreenColor(GameResults.PassOrFail);

}

int ReadHowManyQuestions()
{
	int NumberOfQuestions = 0;
	do
	{
		cout << "How Many Questions do you Want to answer ? \n";
		cin >> NumberOfQuestions;


	} while (NumberOfQuestions < 1);

	return NumberOfQuestions;
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
		stGameResults GameResults = PlayGame(ReadHowManyQuestions());
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
