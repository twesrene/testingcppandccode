#include <iostream>
using namespace std;

int main()
{
    char text[] = "Bilateral trade between Malaysia and China is expected to exceed US$100 billion this year, higher than the US$96 billion chalked up in 2017, said China's ambassador to Malaysia, Bai Tian. He said bilateral trade between the two nations grew 14.7 percent to US$42.7 billion in the first five months of this year compared with the same period last year. Imports from China to Malaysia accounted for US$18 billion, while exports to China stood at US$25 billion.";
    int i, length = 0;

    while (text[length] != '\0')
    {
        length++;
    }

    for (i = 0; i <= length - 3; i++)
    {
        if (text[i] == 'U' && text[i+1] == 'S' && text[i+2] == '$')
        {
            cout << "Located string US$ at position "
                 << i << " to " << i+2 << endl;
        }
    }

    return 0;
}
