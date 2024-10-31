//Prof : 
#include <iostream>
#include <cstdlib>

using namespace std;

enum enQuestionLevel { Easy = 1, Med = 2, Hard = 3, Mix = 4 };
enum enOperationType { Add = 1, Sub = 2, Mul = 3, Div = 4, MixOp = 5 };

string GetOperationTypeText(enOperationType OperationType)
{
	//Add = 1, Sub = 2, Mul = 3, Div = 4, Mix = 5
	string arrOperationType[5] = { "+","-","*","/", "Mix" };
	return arrOperationType[OperationType - 1];
}

string GetQuestionLevelText(enQuestionLevel QuestionLevel)
{
	string arrQuestionLevel[4] = { "Easy","Med","Hard","Mix" };
	return arrQuestionLevel[QuestionLevel - 1];
}

short GetRandomNumber(int From, int To)
{

	int RandNum = RandNum = rand() % (To - From + 1) + From;
	return RandNum;

}

void SetScreenColor(bool Right)
{
	if(Right)
		system("color 2F");//turn screen to Green
	else
	{
		system("color 4F");//turn screen to Red
		cout << "\a";
	}
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

enQuestionLevel ReadQuestionLevel()
{
	short Level = 1;
	do
	{
		cout << "\nEnter Question Level : [1] Easy, [2] Med, [3] Hard, [4] Mix ? ";
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
		cout << "\nEnter Operation Type : [1] Add, [2] Sub, [3] Mul, [4] Div, [5] Mix ? ";
		cin >> OperationType;

	} while (OperationType < 1 || OperationType > 5);

	return (enOperationType)OperationType;
}

struct stQuestion
{
	int Number1 = 0;
	int Number2 = 0;
	enQuestionLevel QuestionLevel;
	enOperationType OperationType;
	int CorrectAnswer = 0;
	int PlayerAnswer = 0;
	bool AnswerResult = false;
};

struct stQuizz
{
	stQuestion QuestionList[100];
	short NumberOfQuestions;
	enQuestionLevel QuestionLevel;
	enOperationType OperationType;
	short NumberOfRightAnswers = 0;
	short NumberOfWrongAnswers = 0;
	bool isPass = false;
};

int SimpleCalculator(int Number1, int Number2, enOperationType OperationType)
{
	switch (OperationType)
	{
	case enOperationType::Add: // '+'
		return Number1 + Number2;
	case enOperationType::Sub: // '-'
		return Number1 - Number2;
	case enOperationType::Mul: // '*'
		return Number1 * Number2;
	case enOperationType::Div: // '/'
		return Number1 / Number2;
	default:
		return Number1 + Number2;
	}
}

short GetRandomOperationType()
{
	//Function to generate a random OperationType

	int Op = GetRandomNumber(1, 4);
	return (enOperationType)Op;

}

stQuestion GenerateQuestion(enQuestionLevel QuestionLevel, enOperationType OperationType)
{
	stQuestion Question;

	if (QuestionLevel == enQuestionLevel::Mix)
	{
		QuestionLevel = (enQuestionLevel)GetRandomNumber(1, 3);
	}

	if (OperationType == enOperationType::MixOp)
	{
		OperationType = (enOperationType)GetRandomOperationType();
	}

	Question.OperationType = OperationType;

	switch (QuestionLevel)
	{
	case enQuestionLevel::Easy:// From 1 to 10
		Question.Number1 = GetRandomNumber(1, 10);
		Question.Number2 = GetRandomNumber(1, 10);

		Question.CorrectAnswer = SimpleCalculator(Question.Number1, Question.Number2, Question.OperationType);
		Question.QuestionLevel = QuestionLevel;
		return Question;
	case enQuestionLevel::Med:// From 10 to 50
		Question.Number1 = GetRandomNumber(10, 50);
		Question.Number2 = GetRandomNumber(10, 50);

		Question.CorrectAnswer = SimpleCalculator(Question.Number1, Question.Number2, Question.OperationType);
		Question.QuestionLevel = QuestionLevel;
		return Question;
	case enQuestionLevel::Hard:// From 50 to 100
		Question.Number1 = GetRandomNumber(50, 100);
		Question.Number2 = GetRandomNumber(50, 100);

		Question.CorrectAnswer = SimpleCalculator(Question.Number1, Question.Number2, Question.OperationType);
		Question.QuestionLevel = QuestionLevel;
		return Question;
	}
	return Question;
}

void GenerateQuizzQuestions(stQuizz& Quizz)
{

	for (short Question = 0; Question < Quizz.NumberOfQuestions; Question++)
	{

		Quizz.QuestionList[Question] = GenerateQuestion(Quizz.QuestionLevel, Quizz.OperationType);

	}
}

int ReadQuestionAnswer()
{
	int PlayerAnswer = 0;

	cin >> PlayerAnswer;
	return PlayerAnswer;
}

void PrintTheQuestion(stQuizz& Quizz, short QuestionNumber)
{
	cout << "\n";
	cout << "Question [" << QuestionNumber + 1 << "/" << Quizz.NumberOfQuestions << "]\n\n";
	cout << Quizz.QuestionList[QuestionNumber].Number1 << endl;
	cout << Quizz.QuestionList[QuestionNumber].Number2 << " ";
	cout << GetOperationTypeText(Quizz.QuestionList[QuestionNumber].OperationType);
	cout << "\n___________" << endl;
}

void CorrectTheQuestionAnswer(stQuizz& Quizz, short QuestionNumber)
{
	if (Quizz.QuestionList[QuestionNumber].PlayerAnswer != Quizz.QuestionList[QuestionNumber].CorrectAnswer)
	{
		Quizz.QuestionList[QuestionNumber].AnswerResult = false;
		Quizz.NumberOfWrongAnswers++;

		cout << "Wrong Answer :-( \n";
		cout << "The Right Answer is : ";
		cout << Quizz.QuestionList[QuestionNumber].CorrectAnswer << endl;

	}
	else
	{
		Quizz.QuestionList[QuestionNumber].AnswerResult = true;
		Quizz.NumberOfRightAnswers++;
		cout << "Right Answer :-) \n";

	}
	cout << endl;
	SetScreenColor(Quizz.QuestionList[QuestionNumber].AnswerResult);
}

void AskAndCorrectQuestionListAnswers(stQuizz& Quizz)
{
	for (short QuestionNumber = 0; QuestionNumber < Quizz.NumberOfQuestions; QuestionNumber++)
	{

		PrintTheQuestion(Quizz, QuestionNumber);
		Quizz.QuestionList[QuestionNumber].PlayerAnswer = ReadQuestionAnswer();
		CorrectTheQuestionAnswer(Quizz, QuestionNumber);

	}

	Quizz.isPass = (Quizz.NumberOfRightAnswers >= Quizz.NumberOfWrongAnswers);

	/*
	if (Quizz.(Quizz.NumberOfRightAnswers >= (Quizz.NumberOfWrongAnswers)
		Quizz.isPass = true;
	else
		Quizz.isPass = false;
		*/
}

string GetFinalResultsText(bool Pass)
{
	if (Pass)
		return "PASS :-)";
	else
		return "Fail :-(";
}

void PrintQuizzResult(stQuizz Quizz)
{

	cout << "\n--------------------------------------------------\n";
	cout << "Final Result is " << GetFinalResultsText(Quizz.isPass);
	cout << "\n--------------------------------------------------\n\n";

	cout << "Number of Questions : " << Quizz.NumberOfQuestions << endl;
	cout << "Question Level      : " << GetQuestionLevelText(Quizz.QuestionLevel) << endl;
	cout << "Operation Type      : " << GetOperationTypeText(Quizz.OperationType) << endl;
	cout << "Number Of Right Answers : " << Quizz.NumberOfRightAnswers << endl;
	cout << "Number Of Wrong Answers : " << Quizz.NumberOfWrongAnswers << endl;
	cout << "--------------------------------------------------\n\n";

}

void PlayMathGame()
{
	stQuizz Quizz;

	Quizz.NumberOfQuestions = ReadHowManyQuestions();
	Quizz.QuestionLevel = ReadQuestionLevel();
	Quizz.OperationType = ReadOperationType();

	GenerateQuizzQuestions(Quizz);
	AskAndCorrectQuestionListAnswers(Quizz);
	PrintQuizzResult(Quizz);
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
		PlayMathGame();

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
