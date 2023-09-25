#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
    ofstream monFlux;
    monFlux.open("/c/scores.txt");
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