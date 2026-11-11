#include<iostream>
using namespace std;
int main(){
    int arr[5],*ptr,sum = 0,total=0;
    ptr = arr;
    cout<<"Enter integers: "<<endl;
    for(int i = 0;i<5;i++){
        cin>>*(ptr + i);
        total++;
        sum+=*(ptr + i);
    }
    double ave =(double)sum/total;
    cout<<"The sum is: "<<sum<<endl;
    cout<<"The average is: "<<ave<<endl;
}
