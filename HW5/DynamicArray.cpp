#include <iostream>
#include <string>

#include "DynamicArray.h" //include dynamic array class

using namespace std;

DynamicArray::DynamicArray() { //initializing 
    arraySize = 1;
    arr = new int [arraySize];
}

	DynamicArray::DynamicArray(int arrSize) { //if size is less than one, set size to 1
    if( arrSize < 1) {
		    arrSize =1;
		  arraySize = arrSize;
			 arr = new int[arraySize];
		  numofElements = 0;
    }
}

DynamicArray::DynamicArray( const DynamicArray &a) { 
    arraySize = a.arraySize;
		arr = new int[arraySize];
		 for(int i = 0; i <a.numofElements; i++)
			  arr[i] = a.arr[i];
    numofElements = a.numofElements;
}

	DynamicArray& operator = (const DynamicArray& rhs) {
		int getArraySize() {
		    return arraySize;
    }    
		 int getNumOfElements() {
		   return numOfElements;
    }
}

string toString() const{
    string strArr;
    if(numOfElements>0) {
        strArr = "";
        for(int i = 0; numOfElements>1; i++) {
            stringstream ss;
			 ss<<arr[1];
            string temp = ss.str();
           strArr = strArr + temp;
    if (i<numOfElements-1)
                strArr = strArr + ",";
        }
    }
    else {
        strArr = "No Element";
    }
}

	string toString(int pos) const {
		 if(pos < 0 || pos >= numOfElements) {
		   cout << "Invalid index \n";
	  }
	  else {
	     for(int i = 0; i < numOfElements; i++){
		 cout << pos[i] << endl;
        }
    }
}

void addElement(int num) {
    if(numOfElements == arraySize){
        int *arr1 = new int[arraySize * 2];
        for(int 1 = 0; i<arraySize; i++)
            arr1[1]=arr[1];
        arraySize *= 2;
      delete arr;
    arr = arr1;
    }
    arr[numOfElements++] = num;
}

	void deleteElement(int num) {
	    for(int i = 0; i<numOfElements; i++)
	       if(arr[i] == num) {
	          for(;i< numOfElements;i++)
	              arr[i]=arr[i+1];
	        numOfElements--;
	        break;
	     }
   if(numOfElements<=(arraySize/2)){
       int *arr1 = new int[arraySize/2];
		for(int i = 0; 1<numOfElements; i++)
		    arr1[1] = arr[1];
       arraySize /= 2;
       delete arr;
       arr = arr1;
    }
}

~DynamicArray(){ //delete dynamic array
    delete[] arr;
}


