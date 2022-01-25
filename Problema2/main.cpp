#include <iostream>

using namespace std;
bool funcion(char* cad1,char* cad2, unsigned int tam1, unsigned int tam2);
int main()
{
    bool boo;
    char cad1[] = {'A','B','C','d','e','f','g','h','i','J','\0'};
    char cad2[] = {'K','l','M','n','\0'};
    char cad3[] = {'A','B','C','d','e','f','g','h','i','K','\0'};
    unsigned int tam1 = sizeof (cad1);
    unsigned int tam2 = sizeof (cad3);
    boo = funcion(cad1,cad3,tam1,tam2);
    cout << boo << endl;
    return 0;
}
bool funcion(char* cad1,char* cad2, unsigned int tam1, unsigned int tam2){
    if (tam1 != tam2){
        return false;
    }
    else {
       for (unsigned int i = 0; i < tam1; i++){
           if (cad1[i] != cad2[i]){
               return false;
           }
       }
       return true;
    }

}
