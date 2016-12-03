//Pagina 128 esercizio 51//

#include <iostream>
using namespace std;

int numeri[10];
int x;
int superiori;

int main(){
for (x=0;x<10;x++){
cout<< "Inserisci il valore "<<x<<"  "<<"dell'array: ";
cin>>numeri[x];
}
for(x=0; x<10; x++){
if(numeri[x]>5) superiori++;
else{}
}
cout<<"I numeri superiori a 5 sono: " <<superiori;
return 0;
}
