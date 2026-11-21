#include<iostream>
using namespace std;

double convertTemperature(double cel);

int main(){
    double cel;
    double fah;
    for(int i=0;i<5;i++){
        cout<<"Enter celcius: ";
        cin>>cel;
        fah = convertTemperature(cel);
        cout<<"The fahrenheit is "<<(double)fah<<endl;
}
    return 0;
}
double convertTemperature(double cel){
    return((9*cel/5)+32);
}
