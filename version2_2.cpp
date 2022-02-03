#include "iostream"
#include "stdio.h"
#include "cstdlib"
#include <cstring>
#include <string>
using namespace std;

string inversePhrase(string phrase, int k)
{
    int i,nbre;
    string phraseCodee;
    for (i = k - 1; i >= 0; i--)
    {

        //phrase[i] = phrase[i];

         if (phrase[i]>='A'&&phrase[i]<='Z')
            phraseCodee[i]=(((phrase[i]-65)+nbre)%26)+65;
        else if( phrase[i]>='a'&&phrase[i]<='z')
            phraseCodee[i]=(((phrase[i]-97)+nbre)%26)+97;
    }
    return phraseCodee;
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