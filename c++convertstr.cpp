#include<iostream>
#include<cctype>
using namespace std;

void count(char ch[], int size);
void convertString(char ch[], int size);

int main()
{
    char ch[] = "In 2026, the global tech ecosystem evolved dramatically, with companies like OpenAI and Google releasing 50B updates to their AI models. Developers must adapt by learning advanced frameworks, such as React Native version 0.74, to build scalable applications. You can learn more by visiting the GitHub developer community.";

    int size = sizeof(ch) - 1;

    count(ch, size);

    convertString(ch, size);

    cout << "\nConverted String:\n";
    cout << ch;

    return 0;
}

void count(char ch[], int size)
{
    int lower = 0;
    int upper = 0;
    int punct = 0;
    int digit = 0;

    for (int i = 0; i < size; i++)
    {
        if (islower(ch[i]))
            lower++;

        if (isupper(ch[i]))
            upper++;

        if (ispunct(ch[i]))
            punct++;

        if (isdigit(ch[i]))
            digit++;
    }

    cout << "Lowercase: " << lower << endl;
    cout << "Uppercase: " << upper << endl;
    cout << "Punctuation: " << punct << endl;
    cout << "Digits: " << digit << endl;
}

void convertString(char ch[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (islower(ch[i]))
            ch[i] = toupper(ch[i]);

        else if (isupper(ch[i]))
            ch[i] = tolower(ch[i]);
    }
}
