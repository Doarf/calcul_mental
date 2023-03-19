#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // initialisation de la graine du générateur de nombres aléatoires
    srand(time(0)); 
    int a, b, c, reponse, choix, difficulte;
    char operateur;

    do
    {
        cout << "Choisissez le niveau de difficulté (1 pour facile, 2 pour moyen, 3 pour difficile) : ";
        // L'utilisateur choisit la difficulté
        cin >> difficulte;
        // Génération des nombres aléatoires en fonction de la difficulté choisie
        switch (difficulte)
        {
            case 1:
                a = rand() % 10; // nombre aléatoire entre 0 et 9
                b = rand() % 10; // nombre aléatoire entre 0 et 9
                c = rand() % 2;   // nombre aléatoire entre 0 et 1
                break;
            case 2:
                a = rand() % 50 + 10; // nombre aléatoire entre 10 et 59
                b = rand() % 50 + 10; // nombre aléatoire entre 10 et 59
                c = rand() % 3;   // nombre aléatoire entre 0 et 2
                break;
            case 3:
                a = rand() % 100 + 50; // nombre aléatoire entre 50 et 149
                b = rand() % 100 + 50; // nombre aléatoire entre 50 et 149
                c = rand() % 4;   // nombre aléatoire entre 0 et 3
                break;
            default:
                cout << "Choix de difficulté invalide. Veuillez réessayer." << endl;
                continue; // retourne au début de la boucle do-while
        }

        // Génération de l'opérateur et de la réponse en fonction des nombres aléatoires générés
        switch (c)
        {
            case 0:
                operateur = '+';
                reponse = a + b;
                break;
            case 1:
                operateur = '+';
                reponse = a + b;
                break;
            case 2:
                operateur = '+';
                reponse = a + b;
                break;
            case 3:
                operateur = '+';
                reponse = a + b;
                break;
        }
        // Affichage des choix possibles pour la réponse
        cout << "Calculez : " << a << " " << operateur << " " << b << endl;
        cout << "1. " << reponse << endl;
        cout << "2. " << reponse - 1 << endl;
        cout << "3. " << reponse + 1 << endl;
        cout << "4. " << reponse - 2 << endl;
        cout << "Choisissez la réponse correcte (1, 2, 3 ou 4) : ";
        cin >> choix;
        
        // Structure de choix pour la bonne réponse, la mauvaise réponse et une proposition de continuer
        if (choix == reponse)
        {
            cout << "Bonne réponse !" << endl;
        }
        else
        {
            cout << "Mauvaise réponse... La réponse correcte était : " << reponse << endl;
        }

        cout << "Voulez-vous continuer ? (0 pour arrêter sinon tapez un nombre) : ";
        cin >> choix;

    } while (choix != 0);

    return 0;
}
