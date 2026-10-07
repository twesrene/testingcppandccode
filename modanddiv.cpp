#include<iostream>
using namespace std ;
int main(){
    int number;
    cout<<"What number do you want to test "<<endl;
    cin>>number;

    int a = number/10000;
    int b = number/1000%10;
    int c = (number/100)%10;
    int d = (number/10)%10;
    int e = (number % 10);

    cout<<"after coverting, your number becomes "<<endl;
    cout<<a<<b<<c<<d<<e ;

    return 0;
}
