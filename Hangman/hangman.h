#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

#ifndef HANGMAN_H
#define HANGMAN_H
//defining all my functions here because Julian hates clutters
//scrapped dynamic array in favor of vectors <3
class Hangman {
public:
	/* Hangman(int rows) {
		string* array = new string[rows];
	} */
	Hangman(){}

	int difficulty;

	void setDifficulty(int tempDif){
		difficulty = tempDif;
	}
	int getDifficulty() {
		return difficulty;
	}

//	void readFile(ifstream& infile , int rows) {
//		string line;
//		for (int i = 0; i < rows; i++) {
//			getline(infile, line);
//			istringstream iss(line);
//			iss >> array[i];
//		}
//	}

//	void print(int rows) {
//		for (int i = 0; i < rows; i++) {
//			cout << array[i];
//			cout << endl;
//		}
//	}
//	string *array;
};



#endif