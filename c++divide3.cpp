#include<iostream>
using namespace std;
int main(){
    int a;
    char ans;
    while(true){
        cout<<"Enter an interger: ";
        cin>>a;
        if ( a % 3 == 0 ){
            cout<<"The interger "<<a<<" is divisible by 3"<<endl;
            }
            else{
                cout<<"The interger "<<a<<" is not divisible by 3"<<endl;
            }

        cout<<"\nDo you want to continue enter interger?(Y/N):";
        cin>>ans;

        if(ans == 'Y'){
            continue;
        }
        else{
            if(ans == 'N'){
                cout<<"Program End!";
                break;
            }
        }
        }
        return 0;
    }
