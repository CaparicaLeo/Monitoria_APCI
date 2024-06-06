#include <iostream> 
using namespace std;

int main(){
    string nome;
    cout << "Nome do Produto: ";
    cin >> nome;

    int quantidadeAdd;
    cout << "Quantidade Adquirida: ";
    cin >> quantidadeAdd;

    int preco;
    cout << "Preco do produto:";
    cin >> preco;

    int totalCompra = quantidadeAdd*preco;

    float desconto, totalDesconto;

    if(quantidadeAdd<=5){
        desconto = totalCompra*0.02;
        totalDesconto = totalCompra - desconto;
        cout << "Seu total com Desconto e de R$" << totalDesconto << endl;
    }
    else if(quantidadeAdd > 5 && quantidadeAdd<=10){
        desconto = totalCompra*0.03; 
        totalCompra = totalCompra - desconto;
        cout << "Seu total com Desconto e de R$" << totalDesconto << endl;
    }
    else{
        desconto = totalCompra * 0.05;
        totalCompra = totalCompra - desconto;
        cout << "Seu total com Desconto e de R$" << totalDesconto << endl;
    }
}