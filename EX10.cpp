#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main ()
{
    string const nomFichier("/c/scores.txt");
    ifstream monFlux(nomFichier.c_str());
    if (monFlux)
    {
        //les instructions seront situes ici pour utiliser ce fichier.
    }
    else
    {
        cout  <<"Erreur: Impossible d'ouvrir le fichier."<< endl;
    }
    monFlux.close();
    return 0;
}