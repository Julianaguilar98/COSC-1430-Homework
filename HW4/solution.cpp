#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;
//adding in our functions
void removeWhiteSpaces(ifstream &dataIn, string output);
	void countNoOfChars(string inputFile, string output);
		void countWords(string inputFile, string output);
			void replaceVowels(string inputFile, string output);
				void reverseFileLines(string inputFile, string output);


			int main() {
				ifstream dataIn;
				string inputFile, line, output, File1; 

cout << "1. Get rid of white space" << endl;
	cout << "2. Print amount of characters in the file" << endl;
		cout << "3. Print amount of words in the file" << endl;
	cout << "4. Replace all vowels with 3's" << endl;
cout << "5. Print the file lines in reverse order" << endl;

		output = "output.txt";

		cout << "Enter the Input file :" << endl;
		int choice;
		cin >> inputFile >> choice;

				//Data validation
				dataIn.open(inputFile.c_str());
				if (dataIn.fail())
				{
					cout << "** File Not Found **";
					return 1;
				}
				else
				{

					// Making a switch for all the cases


switch (choice)
{
case 1: {
removeWhiteSpaces(dataIn, output);
break;
}
	case 2: {
		countNoOfChars(inputFile, output);
		break;
}
		case 3: {
			countWords(inputFile, output);
			break;
}
	case 4: {
		replaceVowels(inputFile, output);
		break;
}
case 5: {
reverseFileLines(inputFile, output);
break;
}
}
}
			
return 0;
}

void removeWhiteSpaces(ifstream &dataIn, string output) {
string line;
	ofstream dataOut;
	dataOut.open(output.c_str());
	while (!dataIn.eof())
	{
		getline(dataIn, line);
		for (int i = 0; i < line.length(); i++)
		{
			if (line.at(i) != ' ')
				dataOut << line.at(i);
		}
		dataOut << endl;
	}

	dataOut.close();
}


//Count # of Chars
void countNoOfChars(string inputFile, string output)
{
	string line;
	ifstream dataIn;
	ofstream dataOut;
	int cnt = 0;
	dataIn.open(inputFile.c_str());
	while (!dataIn.eof())
	{
		getline(dataIn, line);
		for (int i = 0; i < line.length(); i++)
		{
			if (line.at(i) >= 'a' && line.at(i) <= 'z')
				cnt++;
			else if (line.at(i) >= 'A' && line.at(i) <= 'Z')
				cnt++; //EDITED
		}

	}
	dataIn.close();
	dataOut.open(output.c_str());
	dataOut << cnt << endl;
	dataOut.close();
}

// Count words in string
void countWords(string inputFile, string output)
{
	string word;
	ifstream dataIn;
	ofstream dataOut;
	int cnt = 0;
	dataIn.open(inputFile.c_str());
	while (dataIn >> word)
	{
		cnt++;
	}
	dataIn.close();
	dataOut.open(output.c_str());
	dataOut << cnt;
	dataOut.close();
}

//Replace vowels in string
void replaceVowels(string inputFile, string output)
{

	string line;
	char ch;
	ifstream dataIn;
	ofstream dataOut;
	int cnt = 0;
	dataIn.open(inputFile.c_str());
	dataOut.open(output.c_str());

	while (!dataIn.eof())
	{
		getline(dataIn, line);
		for (int i = 0; i < line.length(); i++)
		{
			ch = line.at(i);
			if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
			{
			dataOut << "3";
			}
			else
			{
			dataOut << ch;
			}
		}

		if (line.length() != 0)
		dataOut << "\n";
	}
	dataIn.close();
	dataOut.close();
}

// Reverse file lines
void reverseFileLines(string inputFile, string output)
{
	ifstream dataIn;
	ofstream dataOut;
	string line, reversed;
	dataIn.open(inputFile.c_str());
	dataOut.open(output.c_str());

	while (getline(dataIn, line))
	{
		reversed = line + "\n" + reversed;
	}
		

		dataIn.close();
		dataOut << reversed;
	dataOut.close();
}

	//dataIn.close();
	
	//return 0;

