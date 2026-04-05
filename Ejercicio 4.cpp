#include <iostream>
using namespace std;
int main()
    {
         int num=0, i=1;
        while (i<=5 && num!=6) { // Establece cantidad de intentos y número correcto
            cout<< "Ingresar intento "<<i<<endl;
            cin>> num;
            cout<< ((num>6)? "Demasiado Alto\n":(num<6)? "Demasiado Bajo\n":""); //Verifica si el número ingresado es mayor o menor al correcto
            i++;
            }
        if (num==6) {
        cout<< "LOGRADO"; // Enunciado si el número es el correcto
        }
        else{
        cout<< "Lo siento, terminó tus intentos. El número era 6 "; //Enunciado si se realizó los 5 intentos y no se ingresó el número correcto
        }
       return 0;
    }
        

    
        