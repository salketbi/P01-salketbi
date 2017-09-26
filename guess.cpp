#include<cstdlib>
#include<iostream>
#include <ctime>
using namespace std;

int main() {

srand ( time(NULL) );
int randomNumber;

randomNumber = rand() % 10 + 1;
int guessNumber;
cout<<"\nGuess the computer's number: ";
cin>>guessNumber;

if (guessNumber == randomNumber)
{
cout<<"You, guessed correctly! You win !";
}
else
{
cout<<"you were off by "<< abs(guessNumber - randomNumber)<<". Sorry, You lose."<< endl;
}
;
return 0;
}


