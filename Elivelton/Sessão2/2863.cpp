#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int casos;
    float tentativa, menor;
    while(cin >> casos){
        menor = 100.0f;
        int i=0;
        while(i<casos){
            cin >> tentativa;
            if(tentativa < menor){
                menor = tentativa;
            }
            i++;
        }

        cout << fixed << setprecision(2) << menor << endl;
    }
    return 0;
}