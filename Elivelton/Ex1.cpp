#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float salario;
    float conta;

    cin >> salario;

    if(salario>= 0.0 && salario <=2000.00){
        cout << "Isento" << endl;
    }
    else if(salario > 2000 && salario <= 3000){
        conta = (salario-2000.0)*0.08;
        cout << "R$ " << fixed << setprecision(2) << conta << endl;

    }
    else if(salario > 3000 && salario <= 4500){
        conta = (salario-3000.0)*0.18 + (1000*0.08);
        cout << "R$ " << fixed << setprecision(2) << conta << endl;
    }
    else if(salario > 4500){
        conta = (salario-4500.0)*0.28 + (1500*0.18) + (1000*0.08);
        cout << "R$ " << fixed << setprecision(2) << conta << endl;
    }
    return 0;
}