#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string const nomFichier("C:/scores.txt");
    ofstream monFlux(nomFichier.c_str());
    return 0;
}