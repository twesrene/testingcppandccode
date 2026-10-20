#include<iostream>
using namespace std;
int main(){
    int x,y;
    char op;
    while(op!='$'){
        cout<<"Enter an arithmatic operator: ";
        cin>>op;
        cout<<"Enter 2 intergers: ";
        cin>>x>>y;

        if(op=='$'){
            break;
        }

        switch(op){
        case '+':
            cout<<x<<"+"<<y<<"="<<x+y<<endl;
            break;
        case '-':
            cout<<x<<"-"<<y<<"="<<x-y<<endl;
            break;
        case '*':
            cout<<x<<"*"<<y<<"="<<x*y<<endl;
            break;
        case '/':
            cout<<x<<"/"<<y<<"="<<x/y<<endl;
            break;
        case '%':
            cout<<x<<"%"<<y<<"="<<x%y<<endl;
            break;
        default:
            cout<<"invalid operator"<<endl;
        }
    }
}
