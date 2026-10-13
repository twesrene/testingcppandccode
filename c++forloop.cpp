#include<iostream>
using namespace std;
int main(){
    int i, sum, age, old=0, young=100;
    float average;
    for(i=1;i<=10;i++){
        cout<<"Student "<<i<<" age is ? ";
        cin>>age;
        sum += age;

        if(age>old)
            old = age;

        else if(age<young)
            young = age;

    }
    average = sum / 10.0;
    cout<<"The average of the age is : "<<average<<endl;
    cout<<"The eldest is "<<old<<endl;
    cout<<"The youngest is "<<young<<endl;
    return 0;
}
