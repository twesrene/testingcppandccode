#include<iostream>
using namespace std;
int main(){
    int assign1 ,assign2 ,midterm ,i;
    float average;
    for(i=1;i<=5;i++){
        cout<<"Enter the assignment mark: ";
        cin>>assign1;
        cout<<"Enter the mid-term exam mark: ";
        cin>>midterm;
        cout<<"Enter the assignment mark: ";
        cin>>assign2;

        average = (assign1 + midterm + assign2)/3.0;
        cout<<"\nThe student's average mark is "<<average<<endl;

        if(average>=50)
            cout<<"The student has passed"<<endl<<endl;

        else
            cout<<"The student has failed"<<endl<<endl;

        }
return 0;
}
