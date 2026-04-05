#include <iostream>
using namespace std;
int main ()
{
int cmat, test;
cout<< "Ingrese el valor de matricula\n";
cin>> cmat;
float desc= (cmat>1500)?(cmat*0.10):(0.0);// Valor del Descuento si es mayor a 1500
float vdesc= cmat-desc;// Valor total menos el descuento si es que aplica
float rbec=vdesc*0.05, rreg=vdesc*0.15, rext=vdesc*0.25;//Recargos segun tipo de estudiante
cout<< "Ingrese el tipo de estudiante";
cout<< "Becado(1)\n"<< "Regular(2)\n"<<"Extraordinario(3)\n";
cin>> test;
float tpagar= (test==1)?(vdesc+rbec):(test==2)?(vdesc+rreg):(test==3)?(vdesc+rext):(0.0);// Valor total apagar mas recargo y menos descuento si es que aplica
float  rec= (test==1)?(rbec):// Valor del recargo segun tipo de estudiante
(test==2)?(rreg):(rext);
cout << "El valor de su matricula es: $"<< cmat << endl << "El valor de su descuento es: $" << desc << endl//Enunciados
<< "El recargo aplicado es: $" << rec << endl << "El valor total a pagar es: $"<< tpagar ;
    return 0; 
}  