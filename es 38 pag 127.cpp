// ESERCIZIO 38 PAG 127 //
#include<iostream>
using namespace std;

float prezzos();

float prezzo, percentuale, sconto;

int main()
{

    cout<<"Inserisci prezzo " << endl;
    cin >> prezzo ;
    cout<<"Inserisci percentuale"<< endl;
    cin >> percentuale ;
    return 0;
}

float prezzos()
{
    float prezzos;
    sconto= (prezzo*percentuale)/100 ;
    prezzos= prezzo-sconto;
    return prezzos;
}
