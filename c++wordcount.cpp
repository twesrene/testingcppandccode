#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char text[1000];
    int count[100] = {0};
    int maxLength = 0;

    cout << "Enter a string: ";
    cin.getline(text, 1000);

    char *word = strtok(text, " ");

    while (word != NULL)
    {
        int length = strlen(word);

        count[length]++;

        if (length > maxLength)
        {
            maxLength = length;
        }

        word = strtok(NULL, " ");
    }

    cout << "\nWord length\tOccurrences\n";

    for (int i = 1; i <= maxLength; i++)
    {
        cout << i << "\t\t" << count[i] << endl;
    }

    return 0;
}
