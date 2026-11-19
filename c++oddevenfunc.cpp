#include<iostream>
#include<cstring>
using namespace std;

void even(int n[],int size);

int main(){
    int size =0 ;
    int n[100];
    int a=0;

    cout<<"Enter a series of integers: ";
    while(a!=-999){
        cin>>a;
        if(a!=-999){
            n[size]=a;
            size++;
        }
    }
    even(n,size);
    return 0;
}

void even(int n[],int size){
    for(int i=0;i<size;i++){
        if(n[i]%2==0){
            cout<<"Integer "<<n[i]<<" is an even integer."<<endl;;
    }
        else{
            cout<<"Integer "<<n[i]<<" is not an even integer."<<endl;
        }
    }

}
