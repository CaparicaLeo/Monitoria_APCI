#include <iostream> 

using namespace std;

int main(){
    int n1, n2, n3;
    
    cin >> n1 >> n2 >> n3;

    int maior, menor, meio;
    
    //Verifica o maior
    if(n1>n2){
        maior = n1;
        if(n1<n3){
            maior = n3;
        }
    }
    else{
        maior = n2;
        if(n2<n3){
            maior = n3;
        }
    }
    // Verifica o menor
    if(n1<n2){
        menor = n1;
        if(n1>n3){
            menor = n3;
        }
    }
    else{
        maior = n2;
        if(n2>n3){
            menor = n3;
        }
    }
    //Verifica o do meio

    if(maior == n1){
        if(menor == n2){
            meio = n3;
        }
        else{
            meio = n2;
        }
    }
    else if(maior == n2){
        if(menor == n1){
            meio = n3;
        }
        else{
            meio = n1;
        }
    }
    else if(maior == n3){
        if(menor == n1){
            meio = n2;
        }
        else{
            meio = n1;
        }
    }


    cout << menor << endl;
    cout << meio << endl;
    cout << maior << endl << endl;

    cout << n1 << endl << n2 << endl << n3 << endl;

    return 0;
}