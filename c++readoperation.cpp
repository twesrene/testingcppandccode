#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout;
    ifstream fin;
    char op;
    int n1,n2;

    fin.open("op.txt");
    fout.open("result.txt");

    if(!fin){
        fin.close();
        }

        while(fin>>op>>n1>>n2){
        if(op=='+'){
            fout<<n1<<" + "<<n2<<" = "<<n1+n2<<endl;
        }
        if(op=='*'){
            fout<<n1<<" * "<<n2<<" = "<<n1*n2<<endl;
        }
        if(op=='/'){
            fout<<n1<<" / "<<n2<<" = "<<(double)n1/n2<<endl;
        }
        if(op=='-'){
            fout<<n1<<" - "<<n2<<" = "<<n1-n2<<endl;
        }
        if(op=='%'){
            fout<<n1<<" % "<<n2<<" = "<<n1%n2<<endl;
        }

    }
    fin.close();
    fout.close();

    return 0;
}
