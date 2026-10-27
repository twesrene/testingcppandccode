#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int count = 0;
    int input;

    cout << "Enter positive integers (enter a negative integer to stop):\n";

    while (true) {
        cin >> input;
        if (input < 0) {
            break;
        }
        if (count < 100) {
            arr[count] = input;
            count++;
        }
        else {
            cout << "Array is full! Cannot accept more numbers.\n";
            break;
        }
    }

    int sum = 0;
    int largest = arr[0];
    int smallest = arr[0];
    double average;

    for (int i = 0; i < count; i++) {
        sum += arr[i];
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    average = (double)sum / count;

    cout << "\n--- Results ---\n";
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
    cout << "Largest integer: " << largest << endl;
    cout << "Smallest integer: " << smallest << endl;

    return 0;
}
