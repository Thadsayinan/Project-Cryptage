#include "iostream"
#include "stdio.h"
#include "cstdlib"
#include <cstring>

using namespace std;
int main()
{

    char tabPhrase[50], tabInverse[50];
    int i, k, j = 0;

    cout << "Tapez une phrase que vous voulez crypter" << endl;
    cin.getline(tabPhrase, 50);
    k = strlen(tabPhrase);
    for (i = k - 1; i >= 0; i--)
    {

        
      
      
        if ((tabPhrase[i]  >= 97 && tabPhrase[i] <=122 )||(tabPhrase[i]  >= 97 && tabPhrase[i] <=122 ))
         
         tabInverse[j] =tabPhrase[i]+2;
           j++;
        
        
    }
    cout << tabInverse;

    return 0;
}