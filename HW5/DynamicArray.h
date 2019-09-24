#include <iostream>
#include <string>

#ifndef DynamicArray_H //definitions
#define DynamicArray_H

//Your class here DYNAMIC ARRAY
class DynamicArray() {
public:
    DynamicArray();
    DynamicArray(int arrSize);
    DynamicArray( const DynamicArray &a)
    DynamicArray& operator=(const DynamicArray& rhs)
	void addElement(int num);
	void deleteElement(int num);
    int getArraySize() const;
    int getNumOfElements() const;
    string toString() const;
    string toString(int pos) const;

	
private:
	int arraySize;
    int* arr;
    int numOfElements;
}
#endif
