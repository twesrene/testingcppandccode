#include<iostream>
using namespace std;
int main(){
    int num, big=0;
    cout<<"This program finds the largest interger on the list."<<endl;
    cout <<"Enter 0 is you want to end ";
    cin>>num;
    while (num != 0){
        cout <<"Enter 0 is you want to end ";
        cin>>num;
        if(num>big)
            big = num;
    }
    cout <<"The largest number is "<<big;
}
