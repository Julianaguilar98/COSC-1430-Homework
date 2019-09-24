#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

int main()
{
	int iterations, numAttempted, seed;
	double successRate;
	
	//Add other variables necessary for your program
	int selectedSeat;
	
	const int SC = 30;
const int Booked = 1;
const int Empty = 0;
	
	 double observedS;
    int attemptT = 0;
    int successT = 0;
    int seats[SC];
	
	cin >> iterations; //number of iterations to be evaluated
	cin >> numAttempted; //number of attempted sales
	cin >> successRate;
	cin >> seed; //seed for random number generation
	
	//Validate input
	 if(iterations < 1 || numAttempted < 0 || seed < 0 || (successRate < 0 || successRate > 1)){
        cout << "Error. Invalid parameters." << endl;
        return 0;
    }
    
     srand(seed);
     
     
	//Set seed and start iterations
   //Every iteration of the simulation starts by setting all seats to empty		
    for (int i = 0; i < iterations; ++i) {
        for (int j = 0; j < SC; ++j) {
            seats[j] = Empty;
        }
	        for (int k = 0; k < numAttempted; ++k) {
            selectedSeat = rand() % SC;
            /* check for empty seat */
            if(seats[selectedSeat] == Empty){
                seats[selectedSeat] = Booked;
                successT++;
            }
            attemptT++;
        }
    }
	
	    observedS = (float)successT/attemptT;
	    
	 cout << "Acceptable success rate: " << fixed << setprecision(2) << successRate << endl;
    cout << "Average attempted sales: " << fixed << setprecision(2) << (float)numAttempted << endl;
    cout << "Average completed sales: " << setprecision(2) << ((float)successT/iterations) << endl;
	 cout << "Observed success rate: " << setprecision(2) << observedS << endl;
         
         if(observedS < successRate){
            cout<<"Observed success rate not in acceptable range." << endl;
         } else{
            cout << "Observed success rate is acceptable." << endl;
         }
    
    return 0;
}