#include<iostream>
using namespace std;
int main(){
    int n=0;
    do {
        cout<<"Input your interger ";
        cin>>n;
    }
    while(n<1||n>20);

        for(int a=1;a<=n;a++){
            cout<<"*";
        }
            cout<<endl;

            for(int b=1;b<=n-2;b++){
                cout<<"*";

                for(int c=1;c<=n-2;c++){
                    cout<<" ";
                }
                cout<<"*"<<endl;
            }

        if (n > 1) {
            for (int i = 1; i <= n; i++) {
                cout << "*";
        }
        cout << endl;




    }
return 0;
}
