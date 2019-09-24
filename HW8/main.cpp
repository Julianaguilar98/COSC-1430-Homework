#include "SpecialArray.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int measureElementsPerLine(ifstream& inFile) {
	// Add your code here.
	int count = 1;
	string line;

	try {
		if (!(inFile.good()))
			throw runtime_error("File does not exist.");

		if (inFile.peek() == ifstream::traits_type::eof())
			throw runtime_error("File is empty.");

		getline(inFile, line);

		for (int i = 0; i < line.length(); i++)
			if (line[i] == ' ')
				count++;

		return count;
	}
	catch (runtime_error& excpt) {
		cout << excpt.what() << endl;
		cout << "Error." << endl;
	}
	
	return -1;
}

int measureLines(ifstream& inFile) {
	// Add your code here.
	int count = 0;
	string line;

	try {
		if (!(inFile.good()))
			throw runtime_error("File does not exist.");

		if (inFile.peek() == ifstream::traits_type::eof())
			throw runtime_error("File is empty.");

		while (getline(inFile, line))
			count++;

		return count;
	}
	catch (runtime_error& excpt) {
		cout << excpt.what() << endl;
		cout << "Error." << endl;
	}

	return -1;
}

int main()
{
	int numOfLines, numOfElements;
	string fileName, dataType;
	cin >> fileName >> dataType;
	ifstream inFile(fileName);

	// Add try statement below

	try {
		if (!(inFile.good()))
			throw runtime_error("File does not exist.");

		if (inFile.peek() == ifstream::traits_type::eof())
			throw runtime_error("File is empty.");

		numOfElements = measureElementsPerLine(inFile);
		inFile.close();
		inFile.open(fileName);
		numOfLines = measureLines(inFile);
		inFile.close();

		if (dataType == "int") {
			SpecialArray<int> specialArray(numOfLines, numOfElements);
			inFile.open(fileName);
			specialArray.readFile(inFile);
			inFile.close();
			specialArray.print();
			specialArray.sort();
			cout << "\nSorted outputs: \n";
			specialArray.print();
		}
		else if (dataType == "string") {
			SpecialArray<string> specialArray(numOfLines, numOfElements);
			inFile.open(fileName);
			specialArray.readFile(inFile);
			inFile.close();
			specialArray.print();
			specialArray.sort();
			cout << "\nSorted outputs: \n";
			specialArray.print();
		}

	}
	// Add catch statement below
	catch (runtime_error& excpt) {
		cout << excpt.what() << endl;
		cout << "Error." << endl;
	}

	return 0;
}