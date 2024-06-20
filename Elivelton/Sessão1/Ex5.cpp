#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int selecao;

    float quantidade, preco;

    cin >> selecao;
    cin >> quantidade;

    switch(selecao){
        case 1:
            preco = 4;
            break;
        case 2:
            preco = 4.5;
            break;
        case 3:
            preco = 5;
            break;
        case 4:
            preco = 2;
            break;
        case 5:
            preco = 1.5;
            break;
    }

    float total;

    total = preco * quantidade;

    cout << "Total: R$ " << fixed << setprecision(2) << total << endl;

    return 0;
}