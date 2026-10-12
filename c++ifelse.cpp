#include<iostream>
using namespace std;
int main(){
    int score;
    cout<<"Please type in your score: ";
    cin>>score;

    if(score>=80)
        cout<<"You got A on the test, Congrats!";
        else if(score>=60)
            cout<<"You got B on the test, Keep it up!";
            else if(score>=40)
                cout<<"You got C on the test, Never give up!";
                else
                    cout<<"You failed the test, Try harder okay!!";

    return 0;
}
