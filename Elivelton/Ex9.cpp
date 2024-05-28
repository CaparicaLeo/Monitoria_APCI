#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    float a, b, c, area, perimetro;
    cin >> a >> b >> c;

    if ((b - c) < a && a < (b + c) && (a - c) < b && b < (a + c) && (a - b) < c && c < (a + b)){
        perimetro = a + b + c;
        cout << "Perimetro = " << fixed << setprecision(1) << perimetro << endl;
    }
    else{
        area = ((a + b)*c)/2.0;
        cout << "Area = " << fixed << setprecision(1) << area << endl;
    }
}