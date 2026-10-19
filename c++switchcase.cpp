#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char choice;
    int length, width, radius, i;
    float arear, areac;
    const float PI = 3.14159;

    for (i = 1; i <= 5; i++) {
        cout << "What area do you want know Circle (C)/Rectangle (R): ";
        cin >> choice;

        switch (choice) {
            case 'c':
            case 'C':
                cout << "What is the radius of the circle? ";
                cin >> radius;
                areac = PI * radius * radius;
                cout << fixed << setprecision(2) << "The area of the circle is " << areac << endl << endl;
                break;

            case 'r':
            case 'R':
                cout << "What is the length and width of the rectangle? ";
                cin >> length >> width;
                arear = length * width;
                cout << fixed << setprecision(2) << "The area of the rectangle is " << arear << endl << endl;
                break;

            default:
                cout << "Choice not available";
                i=6;
                break;
        }
    }
    return 0;
}
