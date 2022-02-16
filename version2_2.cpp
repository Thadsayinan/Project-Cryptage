#include "iostream"
#include "stdio.h"
#include "cstdlib"
#include <cstring>
#include <string>
using namespace std;

string inversePhrase(string phrase)
{
    int i, nbre, j = 0;

    string phraseCodee;
    cout << "Entrez un cle svp " << endl;
    cin >> nbre;
    for (i = phrase.length(); i >= 0; i--)
    {


      // cout<<phrase<<endl;
       // cout<<i<<endl;
        for (j = 0; j < phrase.length(); j++)

        {
            if (phrase[i] >= 'A' && phrase[i] <= 'Z')

                phraseCodee[j] = phrase[i]+nbre;//(((phrase[i] - 65) + nbre) % 26) + 65;
       

            else if (phrase[i] >= 'a' && phrase[i] <= 'z')

                phraseCodee[j] = phrase[i]+nbre;//(((phrase[i] - 97) + nbre) % 26) + 97;
        }
        
    }
cout<<phraseCodee<<endl;
    return phraseCodee;
}

int main()
{

    string phrase;
    string phraseInverse;

    cout << "Tapez une phrase que vous voulez crypter svp !" << endl;
    getline(cin, phrase);

    phraseInverse = inversePhrase(phrase);

    cout << phraseInverse << endl;

    return 0;
}