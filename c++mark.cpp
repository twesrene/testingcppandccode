#include <iostream>
using namespace std;

int main()
{
    int mark[100];
    int count = 0;
    int num;
    int sum = 0;
    int aboveAverage = 0;
    double average;

    cout << "Enter student marks (-1 to stop): "<<endl;
    cin >> num;
    while (num >= 0 && count < 100){
        if (num >= 0 && num <= 100){
            mark[count] = num;
            count++;
        }
        else{
            cout << "Invalid mark! Enter again: ";
        }

        if (count < 100)
            cin >> num;
    }

    if (count == 0){
        cout << "No marks entered.";
    }
    else
    {
        for (int i = 0; i < count; i++){
            sum += mark[i];
        }

        average = (double)sum / count;
        for (int k = 0; k < count; k++){
            if (mark[k] > average){
                aboveAverage++;
            }
        }

        cout << "Average mark = " << average << endl;

        cout << "Number of students above average = "
             << aboveAverage << endl;
    }

    return 0;
}
