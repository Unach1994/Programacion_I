#include <iostream>
using namespace std;
int main()
    {
         int num=0, i=1;
        while (i<=5 && num!=6) {
            cout<< "Ingresar intento "<<i<<endl;
            cin>> num;
            cout<< ((num>6)? "Demasiado Alto\n":(num<6)? "Demasiado Bajo\n":"");
            i++;
            }
        if (num==6) {
        cout<< "LOGRADO";
        }
        else{
        cout<< "Lo siento, terminó tus intentos. El número era 6 ";
        }
       return 0;
    }
        

    
        