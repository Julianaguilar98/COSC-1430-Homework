#include <iostream>

#include <string>

using namespace std;

 

int main() {

                              //declare variables to store user input

                              int numWords, selection;
                              unsigned long int shift;

                              string *words = NULL, *encryptedWords = NULL;

 

                   bool cont = true;

 

                  //implement a loop so that it will continue asking until the user provides a positive integer

                  // the following provides ONLY part of the loop body, which you should complete

                  do{

                        cout <<"How many words are in your message? \n";

                        cout <<"Enter value: \n";

 

                        // get user input integer here

                        cin>>numWords;

                        if(numWords <= 0)

                               cout <<"Invalid value. Please Re-enter a number of positive value\n";

 

                  }while(numWords <=0);

 

                  //declare a dynamic array of string type with the specified number of elements

 

                  words = new string[numWords];

 

                  

                   while(cont)

                   {

                      cout << "Select one of these options: (1) Get Message (2) Encrypt (3) Print (4) Quit\n";

                      cout <<"Selection: ";

 

                      // obtain user input option (an integer)

                      cin>>selection;

                      // based on the input the program will perform one of the following operations using switch statement

                      
                      switch(selection)

                      {

                          case 1://Get Message

 

                              cout<<"\nEnter Message to Encrypt: " << endl;

                                 // Get the specified number of words from the user

                                 for(int i=0;i<numWords;i++)

                                 {

                                                cin>>*(words+i);

                                 }

 

                                 cout<<"Enter number of letters to shift: "<< endl;

                                 cin>>shift;

 

                              break;

 

                          case 2: //Encrypt

 

                              // Based on the shifting encryption strategy described above, encrypt the individual words

                              // Be careful about the difference between the lower case letters and upper case letters
                                 cout << "\n";

                                 encryptedWords = new string[numWords];

                                 for(int i=0;i<numWords;i++)

                                 {

                                                for(unsigned int j=0;j<(*(words+i)).length();j++)

                     {

                              if(((*(words+i)).at(j) >= 'A') && ((*(words+i)).at(j) <= 'Z'))

                                       (*(encryptedWords+i)) += ((((*(words+i)).at(j)- 'A')+ shift)%26 + 'A');

                              else if(((*(words+i)).at(j) >= 'a') && ((*(words+i)).at(j) <= 'z'))

                                       (*(encryptedWords+i)) += ((((*(words+i)).at(j)- 'a')+ shift)%26 + 'a');

else

(*(encryptedWords+i)) += (*(words+i)).at(j);

}

}

break;

 

      case 3:

 

      if(encryptedWords != NULL)

      {

         cout<<"\nThe message is: ";
         

         for(int i=0;i<numWords;i++)

   {

         cout<<*(encryptedWords+i)<<" ";

   }

         cout<<"\n" <<endl;

}else if(words != NULL)

{

cout<<"The message is: ";

for(int i=0;i<numWords;i++)

{

cout<<*(words+i)<<" ";

}

cout<<"\n"<<endl;

}else
cout<<"First input message"<<endl;

break;

 

case 4:
cont = false;

break;

 

default:

break;

}

 }


delete [] words;

delete [] encryptedWords;
if(cont)
cout << endl;
 return 0;

}