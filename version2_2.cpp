#include "iostream"
#include "stdio.h"
#include "cstdlib"
#include <cstring>
#include <string>
using namespace std;

string inversePhrase(string phrase);

int main()
{

    string phrase;
    string phraseInverse;
    
    cout << "Tapez une phrase que vous voulez crypter svp !" << endl;
    getline(cin, phrase);

    phraseInverse = inversePhrase(phrase);

    cout << phraseInverse;

    return 0;
}

string inversePhrase(string phrase)
{
    int i, nbre = 0, j = 0;

    string phraseCodee;
    cout << "Entrez un cle svp " << endl;
    cin >> nbre;
    for (i = phrase.length(); i >= 0; i--)
    {

        // cout<<phrase<<endl;
        // cout<<i<<endl;

        if (phrase[i] >= 'A' && phrase[i] <= 'Z')

        {

            phraseCodee[j] = phrase[i] + nbre; //(((phrase[i] - 65) + nbre) % 26) + 65;
            j++;
        }

        else if (phrase[i] >= 'a' && phrase[i] <= 'z')
        {
            phraseCodee[j] = phrase[i] + nbre; //(((phrase[i] - 97) + nbre) % 26) + 97;
            j++;
        }

        // return phraseCodee;
    }
    // cout << phraseCodee << endl;
    // cout << phraseCodee[j] << endl;

    return phraseCodee;
}
