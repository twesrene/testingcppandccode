#include<iostream>
using namespace std;
int main(){
    int arr[5],*ptr,small,large;
    ptr = arr;
    cout<<"Enter interger "<<endl;

    for(int i=0;i<5;i++){
        cin>>*(ptr + i);

        if(i==0){
            large = *(ptr + i);
            small = *(ptr + i);
        }
        else{
            if(large< *(ptr + i))
               large = *(ptr + i);
            if(small> *(ptr + i))
                small = *(ptr + i);
               }
        }
        cout<<"The terbalik ";
    for(int i=4;i>=0;i--){
        cout<<*(ptr + i)<<" ";
    }
        cout<<endl<<"Small "<<small<<endl;
        cout<<"Large "<<large<<endl;
    }
