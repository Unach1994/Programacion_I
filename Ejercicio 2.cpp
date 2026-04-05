#include <iostream>
using namespace std;
int main ()
{
int cmat, test;
cout<< "Ingrese el valor de matricula\n";
cin>> cmat;
float desc= (cmat>1500)?(cmat*0.10):(0.0);
float vdesc= cmat-desc;
float dbec=vdesc*0.05, dreg=vdesc*0.15, dext=vdesc*0.25;
cout<< "Ingrese el tipo de estudiante";
cout<< "Becado(1)\n"<< "Regular(2)\n"<<"Extraordinario(3)\n";
cin>> test;
float tpagar= (test==1)?(vdesc+dbec):(test==2)?(vdesc+dreg):(test==3)?(vdesc+dext):(0.0);
float  rec= (test==1)?(dbec):
(test==2)?(dreg):(dext);
cout << "El valor de su matricula es: $"<< cmat << endl << "El valor de su descuento es: $" << desc << endl 
<< "El recargo aplicado es: $" << rec << endl << "El valor total a pagar es: $"<< tpagar ;
    return 0; 
}  