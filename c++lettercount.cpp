#include <iostream>
using namespace std;

int main()
{
    char sentence[500];
    int i = 0, count = 0;

    // Get sentence from user
    cout << "Enter a sentence: ";
    cin.getline(sentence, 500);

    // Read each character
    while (sentence[i] != '\0')
    {
        // Skip spaces
        while (sentence[i] == ' ')
        {
            i++;
        }

        // Stop if the sentence ends
        if (sentence[i] == '\0')
            break;

        // Count one word
        count++;

        // Print individual word
        while (sentence[i] != ' ' && sentence[i] != '\0')
        {
            cout << sentence[i];
            i++;
        }

        cout << endl;
    }

    cout << "\nThere are " << count
         << " words in the given sentence." << endl;

    return 0;
}
