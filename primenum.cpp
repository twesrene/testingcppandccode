#include<iostream>
using namespace std;
int main(){
    int x,d;
    for(x=2;x<=100;x++){
        bool prime = true;
        for(d=2;d * d <= x;d++){
            if(x%d==0){
                prime= false;
                break;
            }
        }
    if (prime)
        cout << x << " ";
    }
    return 0;
}
