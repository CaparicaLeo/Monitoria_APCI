#include <iostream>
using namespace std;
int main()
{
    int numero;
    while(cin >> numero, numero!=0){
        int soma = 0;
        /*if(numero==0){
            break;
        }*/
    
        if(numero%2!=0){
            numero++;
        }
        int i=0;
        while(i<5){
            soma += numero;
            numero += 2;
            i++;
        }
    
        cout << soma <<endl;
    }

    return 0;
}