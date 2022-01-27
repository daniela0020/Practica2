#include <iostream>

using namespace std;

int main()
{
    unsigned short int num = 1; unsigned short int fin =4;
    int mat[5][5];
    for (unsigned int f=0;f<5; f++){
            for(unsigned int c=0; c < 5;c++ ){
                mat[f][c] = num;
                num += 1;
                cout << mat[f][c] << " ";
            }
            cout << endl;
        }
    //Rotada 90 grados
    cout << " " << endl;
    num = 1;
    cout << "Matriz rotada 90 grados." << endl;
    for (short int c=4;c>=0; c--){
            for(unsigned int f=0; f < 5;f++ ){
                mat[f][c] = num;
                num += 1;
            }
        }
    for (unsigned int f=0;f<5; f++){
            for(unsigned int c=0; c < 5;c++ ){
                cout << mat[f][c] << " ";
            }
            cout << endl;
    }
    //Rotar 180 grados
    cout << endl;
    cout << "Matriz rotada 180 grados." << endl;
    num = 1;
    for (short int f=4;f>=0; f--){
            for(short int c=4; c >=0;c-- ){
                mat[f][c] = num;
                num += 1;
            }
        }
    for (unsigned int f=0;f<5; f++){
            for(unsigned int c=0; c < 5;c++ ){
                cout << mat[f][c] << " ";
            }
            cout << endl;

    }
    cout << endl;
    // Rotar 270 grados.
    cout << "Matriz rotada 270 grados." << endl;
    num = 1;
    for (unsigned int c=0;c<5; c++){
            for(short int f=4; f >=0;f-- ){
                mat[f][c] = num;
                num += 1;
            }
        }
    for (unsigned int f=0;f<5; f++){
            for(unsigned int c=0; c < 5;c++ ){
                cout << mat[f][c] << " ";
            }
            cout << endl;
    }

    return 0;
}
