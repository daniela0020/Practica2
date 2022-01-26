#include <iostream>

using namespace std;

int main()
{
    unsigned int suma1 = 0; unsigned int lado = 4; unsigned int suma2 =0; bool cg =true;
    int n = 0;
    int a[4][4] ={{16,3,2,13},{5,10,11,8},{9,6,7,12},{4,15,14,1}}; // Aun no hemos visto en clase como ingresar arreglos por la terminal
    // Para hacer pruebas hay que cambiar tambien el valor de la variable lado
    suma1 = (lado*((lado*lado)+1))/2;
    // filas
    for (unsigned int f=0;f<lado; f++){
        for(unsigned int c=0; c < lado;c++ ){
            suma2 += a[f][c];
            cout << a[f][c];

        }
        cout << endl;
        if (suma2 != suma1){
            cg = false;
            break;
        }
        suma2 = 0;
    }
    // columnas
    if (cg == true){
        for (unsigned int c=0; c <lado; c++){
            for(unsigned int f = 0; f<lado; f++){
                suma2 += a[f][c];
            }
            if (suma2 != suma1){
                cg = false;
                break;
            }
            suma2 = 0;
        }
    }
    // diagonales1
    if(cg == true){
        for(unsigned int f=0; f<lado; f++){
            suma2 += a[f][f];
        }
        if (suma2 != suma1 ){
            cg = false;
        }
    }
    //diagonal2

    if (cg == true){
        suma2 = 0;
        n = lado - 1;
        for(unsigned int f = 0; f<lado; f++){
            if (lado >= 0){
                suma2 += a[f][n];
            }

            n -= 1;

        }
        if (suma2 != suma1 ){
            cg = false;
        }
    }

    if (cg == true){
        cout << "La matriz es un cuadrado magico." << endl;

    }
    else{
    cout << "La matriz no es un cuadrado magico." << endl;
    }
    return 0;
}
