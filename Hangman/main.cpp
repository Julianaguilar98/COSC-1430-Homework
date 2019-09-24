//COSC 1430 Project : HANGMAN
//Made by Justin, Karla, and Julian

#include <iostream>
#include <cstdlib> //for rand
#include<ctime> // for rand
#include <string>
#include "hangman.h"
#include "art.h"
#include <fstream>
#include <vector>
using namespace std;

Hangman Game;
Art GameArt;
int letterFill(char, string, string&);

int main() {
	//File Input Stream. Theoretically we can have the user choose different files for different themes? 
	ifstream DataIn("animals.txt");

	string line;
	vector<string> WordArray;
	int counter = 0;
	while (getline(DataIn, line)) {
		WordArray.push_back(line);
		counter++; //number of lines
	}

	// welcome the user
	GameArt.startScreen();
	cout << "You have been sentenced to death!" << endl;;

	//setting difficulty
	cout << "How much do you want to live, on a scale of 1-10, felon?" << endl;
	int difficultynumber;
	cin >> difficultynumber;
	Game.setDifficulty(difficultynumber);
	int Attempts = Game.getDifficulty();

	cout << "\nYou have " << Attempts << " tries to try and guess the correct word, punk." << endl;
	cout << "The theme is animals. Good luck!";
	cout << "\n==============================================================";


 string name;
 char letter;
 int num_of_wrong_guesses=0;
 string word;

/* string words[] =
 {
 "india",
 "pakistan",
 "nepal",
 "malaysia",
 "philippines",
 "australia",
 "iran",
 "ethiopia",
 "oman",
 "indonesia"
 }; */

  //choose a word from vector
 srand(time(NULL));
 int n=rand()% counter;
 word = WordArray[n]; //FILE ARRAY THING

 // Using _ to keep the word hidden
 string unknown(word.length(),'_');


 // While loop as long as you're still in the game
 while (num_of_wrong_guesses < Attempts)
 {
 cout << "\n\n" << unknown;
 cout << "\nThere are " << word.length() << " Words.\n\nWhat letter will you guess: ";
 cin >> letter;
 // Fill in guesses and increment attempts made
 if (letterFill(letter, word, unknown)==0)
 {
 cout << endl << "Hah! That letter isn't there!" << endl;
 num_of_wrong_guesses++;
 }
 else
 {
 cout << endl << "You guessed right!" << endl;
 }
 // Tell user how many guesses has left.
 cout << "You've got " << Attempts - num_of_wrong_guesses;
 cout << " attempts left to live." << endl;
 // Check if user guessed the word.
 if (word==unknown)
 {
 cout << word << endl;
 GameArt.winScreen();
 cout << "\nYou got it right! Looks like you're a free man.";
 break;
 }
 }
 if(num_of_wrong_guesses == Attempts)
 {
GameArt.gameOver();
 cout << "\nYou lost buddy. Time to die!" << endl;
 cout << "The animal was : " << word << endl;

 }
 cin.ignore();
 cin.get();
 return 0;
}

//function for filling in words guessed/not yet guessed
int letterFill (char guess, string secretword, string &guessword)
{
 int i;
 int matches=0;
 int len=secretword.length();
 for (i = 0; i< len; i++)
 {
 // if the letter was used in another guess
 if (guess == guessword[i])
 return 0;
 // if guessed correctly
 if (guess == secretword[i])
 {
 guessword[i] = guess;
 matches++;
 }
 }
 return matches;
}

