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
 cout << ((prom>=9.0 && nivel==3) ? "Obtiene la beca":// Primer caso igual o mayor a 9 y universitario
 (prom>=8.0 && prom<=9.0 && nivel==2) ? "Obtiene la beca":"No obtiene la beca");//Segundo caso con promedio entre 8 y 9 y bachillerato; y tercer caso
return 0;
}