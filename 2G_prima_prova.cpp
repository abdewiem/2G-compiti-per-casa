#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
  string nome;
  cout << "Come ti chiami? ";
  getline(cin, nome);
  cout << "Ciao " << nome << " come stai?" <<endl;
  string stato;
  getline(cin, stato);
  if (stato == "bene")
    cout << "Sono contento." <<endl;
  else
    cout << "Mi spiace." <<endl;
  system("PAUSE");
  return 0;
}
