#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int radius,length,width,i;
    char choice;
    float arear,areac;
    const float PI = 3.14159;

    for (i=1;i<=5;i++){
        cout<<"What area do youu want to find out?(Circle(C)/Rectangle(R) ";
        cin>>choice;
        if(choice == 'c' || choice == 'C')
        {
            cout<<"What is the radius of the circle? ";
            cin>>radius;
            areac = PI * radius * radius;
            cout<<fixed<<setprecision(2)<<"The area of the circle is "<<areac<<endl<<endl;
        }
            else if(choice == 'r' || choice == 'R')
            {
                cout<<"What is the length and width of the rectangle? ";
                cin>>length>>width;
                arear = length * width;
                cout<<fixed<<setprecision(2)<<"The area of the rectangle is "<<arear<<endl<<endl;
            }

        else
            cout<<"Sorry this choice is not available now"<<endl<<endl;

    }
return 0;
}
