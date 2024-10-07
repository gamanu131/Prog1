#include <stdio.h>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
 
int main() {

float valor;
cin >> valor; 

if( 0 <= valor && valor <= 25){
    cout << "Intervalo [0,25]" << endl;
}else if (25 < valor && valor <=50){
    cout << "Intervalo (25,50]" << endl;
}else if (50 < valor && valor <= 75){
    cout << "Intervalo (50,75]" << endl;
}else if (75 < valor && valor <= 100){
    cout << "Intervalo (75,100]" << endl;
}else if (valor < 0 || valor > 100){
    cout << "Fora de intervalo" << endl;
}



}