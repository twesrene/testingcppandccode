#include<iostream>
using namespace std;

void compute(int x);

int main(){
    int a=1;
    while(a>=1&&a<=10){
        cout<<"Enter a positive integer between 1-10: ";
        cin>>a;
        compute(a);
        if(a<1 || a>10){
            cout<<"error please enter integer 1-10!"<<endl;
    }
    }
return 0;
}

void compute(int x){
    double sum = 1.0;
    double squared = x * x;
    double factorial = 1.0;

    for (int i = 1; i <= x; i++) {
        factorial *= i;
        sum += squared / factorial;
    }

    cout<<"The sum of the series is: "<<sum<<endl;
}
