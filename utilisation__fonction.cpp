#include "iostream"
#include "stdio.h"
#include "cstdlib"
#include <cstring>
#include <string>
using namespace std;

string inversePhrase(string phrase, int k)
{
    int i;
    for (i = k - 1; i >= 0; i--)
    {

       

        if ((phrase[i] >= 97 && phrase[i] <= 122) || (phrase[i] >= 97 && phrase[i] <= 122))
            phrase[i] = phrase[i] + 2;
    }
    return phrase;
}

int main()
{

    string phrase;
    string phraseInverse;

    cout << "Tapez une phrase que vous voulez crypter svp !" << endl;
    getline(cin, phrase);

    int k = phrase.length();

    phraseInverse=inversePhrase(phrase, k);

    cout <<phraseInverse << endl;

    return 0;
}