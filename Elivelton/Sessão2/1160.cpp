#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int casos;
    cin >> casos;
    int i=0;
    while(i<casos){
        int pa, pb, contaAno=0;
        double g1, g2;
        cin >> pa >> pb >> g1 >> g2;
        while(pa<=pb && contaAno<=101){
            //pa = pa + (pa*(g1/100));
            pa+=pa*(g1/100);
            pb = pb + (pb*(g2/100));
            contaAno++;
        }
        if(contaAno < 101){
            cout << contaAno << " anos." << endl;
        }
        else{
            cout << "Mais de 1 seculo." << endl;
        }
        i++;
    }
}