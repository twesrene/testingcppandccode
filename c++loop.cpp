#include <iostream>
using namespace std;

int main() {
    cout << "Number\tSquare\tCube" << endl;
    for (int i = 0; i <= 5; i++) {
        int square = i * i;
        int cube = i * i * i;

        cout << i << "\t" << square << "\t" << cube << endl;
    }

    return 0;
}
