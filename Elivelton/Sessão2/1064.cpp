#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int i=0, contaPositivos=0;
    float numero, media=0.0f;
    while(i<6){
        cin >> numero;
        if(numero>=0){
            contaPositivos++;
            media+=numero;
        }
        i++;
    }
    cout << contaPositivos << " valores positivos" << endl;
    media/=contaPositivos;
    cout << fixed << setprecision(1) << media << endl;
    return 0;
}