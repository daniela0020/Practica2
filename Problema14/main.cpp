#include <iostream>

using namespace std;

int factorial(unsigned int n);

int main()
{
    unsigned int n;unsigned int caminos; unsigned int fact1; unsigned int fact2;
    cout << "Ingrese un numero entero: ";
    cin >> n;
    fact1 = factorial(n*2);
    fact2 = factorial(n);
    caminos = fact1 / (fact2*fact2);
    cout << "Para una malla de " << n <<"x" <<n<<" puntos hay "<< caminos << " caminos." << endl;
    return 0;
}
int factorial(unsigned int n){
    unsigned int fact = 1;
    for (unsigned int i = 1; i <= n; i++){
        fact = fact * i;
    }
    return fact;
}
