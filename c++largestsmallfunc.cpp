#include<iostream>
using namespace std;

float largest(float* ptr,int size,float large=0);
float smallest(float ar[],int size,float small=0);

int main(){
    float num[100];
    float n=0;
    int size = 0;
    float large;
    float big=num[0];
    float small;
    float tiny=num[100];

    cout<<"Enter a number:";
    while(n!=999){
        cin>>n;
        if (n!=999){
            num[size]=n; //broskuy intinya tambah dari size++
            size ++;
            }
        }


    large = largest(num,size,big);
    small =smallest(num,size,tiny);
    cout<<"The largest is "<<large;
    cout<<"The smallest is "<<small;
    return 0;
}

float largest(float* ptr,int size,float large){
    for(int i=0;i<size;i++){
        if (large<*(ptr+i)){ //pointr
            large = *(ptr+i);
        }
    }
    return large;
}

float smallest(float ar[],int size,float small){
    for(int i=0;i<size;i++){
        if (small>ar[i]){ //array
            small=ar[i];

}
    }
    return small;
}
