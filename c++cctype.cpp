#include<iostream>
#include<string>
#include<cctype>
using namespace std;

string convertString(string ch);
void printString(string ch);
void convertLongestWord(string ch);

int main()
{
    string sentence;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    sentence = convertString(sentence);

    printString(sentence);

    convertLongestWord(sentence);

    return 0;
}

string convertString(string ch)
{
    for (int i = 0; i < ch.length(); i++)
    {
        ch[i] = toupper(ch[i]);
    }

    return ch;
}

void convertLongestWord(string ch)
{
    int count = 0;
    int longest = 0;
    int start = 0;
    int longestStart = 0;

    for (int i = 0; i <= ch.length(); i++)
    {
        if (i < ch.length() && ch[i] != ' ')
        {
            if (count == 0)
            {
                start = i;
            }

            count++;
        }
        else
        {
            if (count > longest)
            {
                longest = count;
                longestStart = start;
            }

            count = 0;
        }
    }

    for (int i = longestStart; i < longestStart + longest; i++)
    {
        ch[i] = '*';
    }

    printString(ch);
}

void printString(string ch)
{
    cout << ch << endl;
}
