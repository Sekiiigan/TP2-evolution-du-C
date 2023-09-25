#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main ()
{
    string const nomFichier("/c/scores.txt");
    ofstream monFlux(nomFichier.c_str());
    if (monFlux)
    {
        monFlux.seekp(0,ios::end);
        int taille;
        taille =monFlux.tellp();
        cout << "Taille du fichier " << taille <<"octets."<<endl;
    }
    else
    {
        cout  <<"Erreur: Impossible d'ouvrir le fichier."<< endl;
    }
    return 0;
}