    #include <stdio.h>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
 
int main() {

    double salario, novo, reajuste;
    int porcentagem;
    cin >> salario;
    if(salario <= 400.00 && salario > 0){
        porcentagem = 15;
        novo = salario+(salario*(15.0/100.0));
        reajuste = salario*(15.0/100.0);
    }else if (salario >= 400.01 && salario <= 800.00){
        porcentagem = 12;
        novo = salario+(salario*(12.0/100.0));
        reajuste = salario*(12.0/100.0);
    }else if (salario >= 800.01 && salario <= 1200.00){
        porcentagem = 10;
        novo = salario+(salario*(10.0/100.0));
        reajuste = salario*(10.0/100.0);
    }else if (salario >= 1200.01 && salario <= 2000.00){
        porcentagem = 7;
        novo = salario+(salario*(7.0/100.0));
        reajuste = salario*(7.0/100.0);
    }else if (salario > 2000.00){
        porcentagem = 4;
        novo = salario+(salario*(4.0/100.0));
        reajuste = salario*(4.0/100.0);
    }
    cout << fixed << setprecision(2) << "Novo salario: " << novo << endl;
    cout << fixed << setprecision(2) << "Reajuste ganho: " << reajuste << endl;
    cout << "Em percentual: " << porcentagem << " %" << endl;


    return 0;
}