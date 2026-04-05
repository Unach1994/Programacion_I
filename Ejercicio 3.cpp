#include <iostream>
using namespace std;
int main ()
{
float vel;
cout << "Ingresar velocidad\n";
cin >> vel;
if (vel>0 && vel<=300)// Validación de Velocidad
{
float c_vel=vel/3.6;// Conversión a m/s

cout << "Velocidad Ingresada: "<<vel<< " km/h "<<endl<<"Velocidad en m/s: " << c_vel << " m/s "<< endl;//Clasificación según la velocidad y enunciados
cout << "Velocidad: " << ((vel>=40 && vel<=80)? "Moderada":(vel>=80.01 && vel<=120)? "Rápida":(vel>120)? "Muy Rápida":"Lenta");
}
else 
{
 cout << " ERROR"; // Si la velocidad supera los 300 km/h 
}
return 0;
}