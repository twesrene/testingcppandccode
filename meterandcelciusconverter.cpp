#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    //this is the meter converter
    int meter;

    cout<<"How many meters are you converting? ";
    cin>>meter;

    float inch = meter/0.0254 ;
    float foot = inch/12;

    cout <<fixed <<setprecision(2);
    cout<<meter <<" meter is "<<inch<<" inch and "<<foot<<" foot after converting"<<endl;

    //this is the celcius converter
    int celcius;
    cout << "Enter your temperature in degree celcius: ";
    cin>>celcius;

    float far= (9.0/5.0)*celcius +32;

    cout<<fixed<<setprecision(1);
    cout << celcius <<" degree celcius = "<<far <<" degree fahrenheit";

    return 0;
}
