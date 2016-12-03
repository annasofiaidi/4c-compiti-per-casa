//Pagina 128 esercizio 52//

#include <iostream>
using namespace std;

int numeri[10];
int x;

int main(){
for (x=0;x<10;x++){
cout<< "Inserisci il valore "<<x<<"  "<<"dell'array: ";
cin>>numeri[x];
}
for(x=0; x<3; x++){
numeri[x]= numeri[x]*2;
}
cout<<"I valori raddoppiati delle prime tre componenti: "<<endl;
cout<<"primo: "<<numeri[0]<<endl;
cout<<"secondo: "<<numeri[1]<<endl;
cout<<"terzo: "<<numeri[2]<<endl;
return 0;
}
