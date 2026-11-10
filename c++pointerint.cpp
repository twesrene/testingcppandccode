#include<iostream>
using namespace std;
int main(){
    int arr[5],*ptr,sum =0,total=0;
    cout<<"Input 5 interger value: "<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
        ptr = &arr[i];
        total ++;
        sum += *ptr;
    }
    double average = (double)sum/total;
    cout<<"The sum is "<<sum<<endl;
    cout<<"The average is "<<average<<endl;

    return 0;
}
