#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int num1 = 0,num2 = 0;
    float sum ,avg;
    while(true){
        cout<<"Enter 2 intergers: ";
        cin>>num1>>num2;

        if (num1 < 0 || num2 < 0){
            cout<<"End of the program"<<endl;
            break;
        }

        sum = num1 + num2;
        avg = (num1+num2)/2.0;
        cout<<fixed<<setprecision(2)<<"The sum = " <<sum<<" and the average = "<<avg<<endl<<endl;
    }
return 0;
}
