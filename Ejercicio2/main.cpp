#include <iostream>

using namespace std;

void fun_c(double *a, int n, double *promedio, double *suma);

int main()
{
    double promedio = 0.0; double suma = 0.0;
    double b[7]= {952.4,-456.56,875.96,548,-250,1181.56,987.781};
    fun_c(b,7,&promedio,&suma);
    cout << promedio << endl;
    return 0;
}
void fun_c(double *a, int n, double *promedio, double *suma){
    int i;
    *suma = 0.0;
    for (i = 0; i < n; i++)
    *suma += *(a + i);
    *promedio = *suma / n;
}
