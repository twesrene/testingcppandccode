#include<iostream>
using namespace std;

int cumulativeSum(int n, int &total);

int main(){
    int n = 0;
    int sum = 0;

    while(n != -1){
        cout << "Enter an integer (-1 to end): ";
        cin >> n;

        if(n != -1){
            cumulativeSum(n, sum);
        }
    }

    cout << "Total sum is " << sum;

    return 0;
}

int cumulativeSum(int n, int &total){
    total += n;

    cout << "Add " << n << " to sum results in "
         << total << "." << endl;

    return total;
}
