#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float salario;
    float novoSalario;
    float reajuste;
    float porcentagem;

    cin >> salario;

    if(salario > 0 && salario <= 400.00){
        porcentagem = 0.15;
    }
    else if(salario > 400.0 && salario <= 800.00){
        porcentagem = 0.12;
    }
    else if(salario > 800 && salario <= 1200.00){
        porcentagem = 0.10;
    }
    else if(salario > 1200 && salario <= 2000.00){
        porcentagem = 0.07;
    }
    else if(salario > 2000){
        porcentagem = 0.04;
    }
    
    reajuste = salario * porcentagem;
    novoSalario = salario + reajuste;
    

    cout << "Novo salario: " << fixed << setprecision(2) << novoSalario << endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl;
    cout << "Em percentual: " << fixed << setprecision(0) << porcentagem*100 << " %" << endl;
}