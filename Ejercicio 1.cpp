#include <iostream>
using namespace std;
int main()
{
 float prom;
 int nivel;
 cout << "Ingresar promedio Académico\n";
 cin >> prom;
 cout << "Ingresar nivel Universitario\n";
 cout << "Básico (1)\n"<< "Bachillerato (2)\n"<< "Universitario (3)\n";
 cin >> nivel;
 cout << ((prom>=9.0 && nivel==3) ? "Obtiene la beca":
 (prom>=8.0 && prom<=9.0 && nivel==2) ? "Obtiene la beca":"No obtiene la beca");
return 0;
}