#include <iostream>

using namespace std;

int main()
{
    unsigned int ant = 0;
    unsigned int sig = 0;
    unsigned int total = 0;
    char cad[] = {'C','L','X','X','I','V','\0'}; // Aun no hemos visto en clase como ingresar una cadena de caracteres por medio de la terminal.
    for (unsigned int i=0; cad[i] != '\0';i++){
        if (i == 0){
            if (cad[i] == 'M'){
                ant = 1000;
            }
            if (cad[i] == 'D'){
                ant = 500;
            }
            if (cad[i] == 'C'){
                ant = 100;
            }
            if (cad[i] == 'L'){
                ant = 50;
            }
            if (cad[i] == 'X'){
                ant = 10;
            }
            if (cad[i] == 'V'){
                ant = 5;
            }
            if (cad[i] == 'I'){
                ant = 1;
            }
        }
        else {
            if (cad[i] == 'M'){
                sig = 1000;
            }
            if (cad[i] == 'D'){
                sig = 500;
            }
            if (cad[i] == 'C'){
                sig = 100;
            }
            if (cad[i] == 'L'){
                sig = 50;
            }
            if (cad[i] == 'X'){
                sig = 10;
            }
            if (cad[i] == 'V'){
                sig = 5;
            }
            if (cad[i] == 'I'){
                sig = 1;
            }
            if (ant >= sig){
                total += ant;
            }
            else {
                total -= ant;
            }
            ant = sig;
        }

    }
    if (sig == 0){
        total = ant;
    }
    else{
        total += sig;
    }
    cout << "El numero ingresado fue: "<< cad << endl;
    cout << "Que corresponde a: " << total << endl;
    return 0;
}
