#include <stdio.h>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
 
int main() {
    double codigo, total;
    int quantia;
    cin >> codigo >> quantia;

    if(codigo == 1){
        (total = quantia*4.0);
    }else if(codigo == 2){
        (total = quantia*4.5);
    }else if(codigo == 3){
        (total = quantia*5.0);
    }else if(codigo == 4){
        (total = quantia*2.0);
    }else if(codigo == 5){
        (total = quantia*1.5);
    }
    cout << "Total: R$ " << fixed << setprecision(2) << total << endl;

    return 0;
}