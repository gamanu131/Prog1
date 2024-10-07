#include <stdio.h>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
 
int main() {

double a, b, c, R;
cin >> a >> b >> c;

if(a<(b+c) && b<(a+c) && c<(b+a)){
    cout << fixed << setprecision (1) << "Perimetro = " << a+b+c << endl;
}else{
    R = ((a+b)*c)/2;
    cout << fixed << setprecision (1) << "Area = " << R << endl;
}

}