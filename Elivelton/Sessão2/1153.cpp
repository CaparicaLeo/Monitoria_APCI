#include <iostream> 
using namespace std;
int main(){
    int num;
    cin >> num;
    int fatorial=1;
    while(num>0){
        fatorial*=num;//fatorial = fatorial * num
        num--;
    }
    cout <<fatorial << endl;
    return 0;
}