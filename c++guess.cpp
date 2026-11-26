#include<iostream>
#include<CSTDLIB>

using namespace std;

int main(){
    int x,n;
    char choice;
    x = 1+rand() % 1000;

    cout<<"I have a number between 1 and 1000 can you guess the number?"<<endl;
    cout<<"Please type your first guess.";
    while(x!=0){
        cout<<"Enter your first guess: ";
        cin>>n;

        if(n == x){
            cout<<"Excellent! you guessed the number! Would you like to play again(y/n)?";
            cin>>choice;
            if(choice == 'y')
                continue;
            if(choice == 'n')
                break;
        }

        if(n <= x){
            cout<<"Too low, Try again."<<endl;
        }

        if(n >= x){
            cout<<"Too high, Try again."<<endl;
        }
    }
    return 0;
}
