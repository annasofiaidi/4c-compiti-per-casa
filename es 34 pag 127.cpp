//Esercizio  34 pag 127//
#include <iostream>
using namespace std;
  int i;
void funzione2 (int i)
{
 int k=0;
while (k<5)
{
    k++;
    i++;
    cout<<i<<'\n';

}
}
int main ()
{
    cin>>i;
    funzione2 (i);
    return 0;
}
