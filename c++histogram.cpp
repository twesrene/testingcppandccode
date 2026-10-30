#include<iostream>
using namespace std;
int main(){
    int ar[5];
    cout<<"Please 5 intergers(1-10): "<<endl;
    for(int i = 0;i < 5;i++){
        do{
            cout<<"Number "<<i+1<<" : ";
            cin>>ar[i];
            if (ar[i]<1 || ar[i]>10){
                cout<<"Number is to large";
                break;
            }
        }while(ar[i]<1 || ar[i]>10);
        }
    cout<<endl;

    cout<<"Element"<<"\t"<<"Value"<<"\t"<<"Histogram"<<endl;

    for(int i=0;i<5;i++){
        cout<<i<<"\t"<<ar[i]<<"\t";

        for (int j = 0; j < ar[i]; j++) {
            cout << "*";
    }
    cout<<endl;
    }
}
