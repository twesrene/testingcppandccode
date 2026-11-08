#include <iostream>
using namespace std;

int main()
{
    int arr[6][6];

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            arr[i][j] = i + j;
        }
    }

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << arr[i][j] << "\t";
        }

        cout << endl;
    }

    return 0;
}
