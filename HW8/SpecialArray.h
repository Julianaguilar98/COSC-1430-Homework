// Add headers here
#include <iostream>
#include <fstream>
using namespace std;

#ifndef SpecialArray_H
#define SpecialArray_H

// Add your function declarations and  definitions here. With template classes, it is recommended to put them in the same file.
template<typename T>
class SpecialArray
{
private:
	T **arr;
	int rows;
	int cols;
public:
	SpecialArray();
	SpecialArray(int, int);
	~SpecialArray();
	void readFile(ifstream&);
	T max();
	T min();
	void sort();
	void print();
	void saveToFile();
};


template<typename T>
SpecialArray<T>::SpecialArray() {
	arr = new T**;
}

template<typename T>
SpecialArray<T>::SpecialArray(int r, int c): rows(r), cols(c) {
	arr = new T*[r];
	for (int i = 0; i < r; i++)
		arr[i] = new T[c];
}

template<typename T>
SpecialArray<T>::~SpecialArray() {
	for (int i = 0; i < rows; i++)
		delete[] arr[i];
	delete[] arr;
}

template<typename T>
void SpecialArray<T>::readFile(ifstream& infile) {
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			infile >> arr[i][j];
}

template<typename T>
T SpecialArray<T>::max() {
	T temp = arr[0][0];
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			if (arr[i][j] > temp)
				temp = arr[i][j];
	return temp;
}

template<typename T>
T SpecialArray<T>::min() {
	T temp = arr[0][0];
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			if (arr[i][j] < temp)
				temp = arr[i][j];
	return temp;
}

template<typename T>
void SpecialArray<T>::sort() {
	for (int r = 0; r < rows; r++)
		for (int i = 0; i < cols - 1; i++)
			for (int j = 0; j < cols - i - 1; j++)
				if (arr[r][j] > arr[r][j + 1])
					swap(arr[r][j], arr[r][j + 1]);
}

template<typename T>
void SpecialArray<T>::print() {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout <<  arr[i][j] << " ";
		}
		cout << endl;
	}
}

template<typename T>
void SpecialArray<T>::saveToFile() {
	ofstream myfile;
	myfile.open("output.txt");
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			myfile << arr[i][j] << " ";
		}
		myfile << "\n";
	}

	myfile.close();
}

#endif
