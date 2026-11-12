#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str1[100],str2[100];
    char result[200];
    char *ptr1 = str1;
    char *ptr2 = str2;
    char *ptr3 = result;

    cout<<"Enter string 1: ";
    cin>>ptr1;

    cout<<"Enter string 2: ";
    cin>>ptr2;

    strcpy(ptr3,ptr1);
    strcat(ptr3,ptr2);

    cout<<ptr3;

    return 0;
}
