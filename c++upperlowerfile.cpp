#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char ch[100];
    int a,upper=0,lower=0;
    ifstream fin;
    ofstream fout;

    fin.open("infile3.txt");
    fout.open("infile3.txt",ios::app);

    if(!fin){
        fin.close();
    }
        while(fin>>ch[100]){
            a = ch[100];

            if(a>=65 && a<=90){
                upper++;
            }
            if(a>=97 && a<=122){
                lower++;
            }
        }
        fin.close();

    if(fout){
        fout<<endl;
        fout<<"The number of uppercase letters is "<<upper<<endl;
        fout<<"The number of lowerccase letters is "<<lower;

        fout.close();
    }

    return 0;
}
