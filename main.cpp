#include <iostream>
#include <typeinfo>
#include <string>

using namespace std;

const string WORD = "KILIAN";

int main() {
    /* Message de Bienvenue */
    cout << "Bienvenue au jeu du \"Pendu\" !" << endl;
    /* Affichage nombre de lettre pour le mot à trouver */
    auto wordLength = WORD.length();
    for (int i = 0; i < wordLength; i++) { cout << "-"; }
    cout << endl;
    
    /* Proposition de lettre utilisateur */
    char userLetter;
    cin >> userLetter;
    /* Vérification si la lettre proposée est dans le mot ou pas */
    for (int i = 0; i < wordLength; i++)
    {
        if (WORD[i] == userLetter)
        {
            cout << "Gagné !" << endl;
        } else {
            cout << "Perdu !" << endl;
        }
        break;
    }
    return EXIT_SUCCESS;
}