//Me : 
#include <iostream>
#include <string>

using namespace std;

int EncryptionKey = 10;

string ReadText(string Message)
{
	string Text = "";

	cout << Message;
	getline(cin, Text);

	return Text;
}

string EncryptText(string  TextToEncrypt)
{
	string TextAfterEncryption = "";

	int length = TextToEncrypt.length();

	for (int i = 0; i <= length; i++)
	{
		TextToEncrypt[i] += ::EncryptionKey;
		TextAfterEncryption += TextToEncrypt[i];
	}
	return TextAfterEncryption;
}

string DecryptText(string  TextToDecrypt)
{
	string TextAfterDecryption = "";

	int length = TextToDecrypt.length();

	for (int i = 0; i <= length; i++)
	{
		TextToDecrypt[i] -= ::EncryptionKey;
		TextAfterDecryption += TextToDecrypt[i];
	}
	
	return TextAfterDecryption;
}

void PrintResult(string Text)
{
	cout << "\nText Befor Encryption : " << Text<<endl;
	cout << "Text After Encryption : " << EncryptText(Text) << endl;
	cout << "Text After Decryption : " << DecryptText(EncryptText(Text)) << endl;

}

int main()
{

	string Text = ReadText("Please enter your Text : ");

	
	PrintResult(Text);

	

	return 0;
}

=======================================================================================

//Prof : 
#include <iostream>
#include <string>

using namespace std;

string ReadText()
{
	string Text = "";

	cout << "Please enter your Text :";
	getline(cin, Text);

	return Text;
}

string EncryptText(string Text, short EncryptionKey)
{
	for (int i = 0; i <= Text.length(); i++)
	{

		Text[i] = char((int)Text[i] + EncryptionKey);

	}
	return Text;
}

string DecryptText(string Text, short EncryptionKey)
{

	for (int i = 0; i <= Text.length(); i++)
	{

		Text[i] =char((int)Text[i]- EncryptionKey);
		
	}
	return Text;

}


int main()
{
	const short EncryptionKey = 2;  //this is the key

	string Text = ReadText();
	string TextAfterEncryption = EncryptText(Text, EncryptionKey);
	string TextAfterDecryption = DecryptText(TextAfterEncryption, EncryptionKey);

	cout << endl;
	cout << "Text Befor Encryption : " << Text << endl;
	cout << "Text After Encryption : " << TextAfterEncryption << endl;
	cout << "Text After Decryption : " << TextAfterDecryption << endl;

	

	return 0;
}
