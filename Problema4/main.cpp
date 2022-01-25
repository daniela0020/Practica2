#include <iostream>

using namespace std;
void funcion (int num, char* cad,unsigned int tam);
int main()
{
    int num = 12345;
    unsigned int copia = num; unsigned int tam = 0;
        while (copia>0) {
            copia = copia / 10;
             tam += 1;
        }
    char cad[tam+1];
    cad[tam]='\0';
    funcion(num,cad,tam);
    cout << cad << endl;
    return 0;
}
void funcion(int num, char* cad, unsigned int tam){
    unsigned int dig;
    unsigned int con = 0;
    while (num > 0) {
            dig = num % 10;
            num = num / 10;
            tam -= 1;
            cad[tam] = dig + '0';

        }
}
