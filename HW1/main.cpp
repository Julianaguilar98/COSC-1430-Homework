#include <iostream>
#include <iomanip>
using namespace std;

int main() {

   /* Type your code here. */
int players;
double expected_time;
char team;
double actual_time;
double reduction_percentage;

cin>>players>>expected_time>>team;

if((players <= 0) || (expected_time <= 0)){
cout << "Wrong input";
return 0 ;
}

else if((players > 0) && (players <= 6)){
if(team=='r' || team=='R')
reduction_percentage = 10;
else if(team=='b' || team=='B')
reduction_percentage = 15;
else if(team=='Y' || team=='Y')
reduction_percentage = 20;
else
reduction_percentage = 0;
}

else if((players>6) && (players <=12)){
if(team=='r' || team=='R')
reduction_percentage = 20;
else if(team=='b' || team=='B')
reduction_percentage = 25;
else if(team=='y' || team=='Y')
reduction_percentage = 30;
else
reduction_percentage = 0;
}

else if((players>12) && (players<=18)){
if(team=='r' || team=='R')
reduction_percentage = 30;
else if(team=='b' || team=='B')
reduction_percentage = 35;
else if(team=='Y' || team=='Y')
reduction_percentage = 40;
else
reduction_percentage = 0;
}

else{
cout<<"Too many players"<<endl;
return 0;

}
actual_time = expected_time - ( expected_time * ( reduction_percentage / 100 ));
cout << fixed;
cout << setprecision(2) << actual_time<<" minutes";
return 0;
}
