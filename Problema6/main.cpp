#include <iostream>

using namespace std;

int main()
{
    unsigned int tamnum = 1; unsigned int tamlet = 1;
    char cadorg[] = {'9','B','C','d','1','9','j','0','i','J','\0'};
    char* cadnum = new char [tamnum];
    char* cadlet = new char [tamlet];
    for (unsigned int i = 0; cadorg[i] != '\0'; i++){
        if (cadorg[i]>= 47 && cadorg[i]<=57 ){
            cadnum[tamnum-1] = cadorg[i];
            tamnum += 1;
        }
        else {
            cadlet[tamlet-1] = cadorg[i];
            tamlet += 1;
        }

    }
    cout << "original: " << cadorg <<"."<< endl;
    cout << "Texto: "<< cadlet <<".";
    cout << " Numeros: "<< cadnum <<"." <<endl;
    delete[] cadnum;
    delete[] cadlet;
    return 0;
}
