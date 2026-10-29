#include<iostream>
using namespace std;
int main(){
    char ch[50],a;
    int b = 0;
    cout<<"Enter a character( ! to stop ):\n";
    while(b<50){
        cin>>a;
        if (a=='!'){
            break;
        }
        ch[b]=a;
        b++;

    }
    int i,large = ch[0], small= ch[0];
    for(i=0;i<b;i++){
        if(large<ch[b]){
            large = ch[b];
        }
        if(small>ch[b]){
            small = ch[b];
        }
    }
    cout<<"The largest character has the value : "<<large<<endl;
    cout<<"The smallest character has the value : "<<small;
    return 0;

}
