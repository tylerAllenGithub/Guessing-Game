/*Tyler Allen
CS111
3-17-2015
Assignment 4
Program 5
This program will create a guessing game that continues until the user guesses correctly*/

#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  srand(time(0));
  int randNum = rand()%100+1;
  int guess;
  //declare variables, including random Number
  do{
  cout<<"Guess a number between 1 and 100. Enter your guess: ";
  cin>>guess;//continue to ask for input while guess is wrong

       if(guess<randNum)
        cout<<setw(26)<<"Too low, try again."<<endl;
       //determine if it is too low
      else if(guess>randNum)
        cout<<setw(26)<<"Too high, try again."<<endl;
       //determine if it is too high
  } while(guess!=randNum);

  cout<<"You guessed it right!"<<endl;
  //output when guess is right
  return 0;
}
