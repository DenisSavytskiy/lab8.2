#include <iostream>
#include <string>

using namespace std;

size_t CountWords(const string& s)
{
    size_t wordCount = 0;
    bool inWord = false;

    for (size_t i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ')
        {
            if (!inWord)
            {
                wordCount++;
                inWord = true;
            }
        }
        else
        {
            inWord = false;
        }
    }

    return wordCount;
}

int main()
{
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    size_t wordCount = CountWords(str);
    cout << "Number of words in string: " << wordCount << endl;

    return 0;
}
