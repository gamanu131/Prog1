#include <stdio.h>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
 
int main() {

int numero, horas;
double pay, salario;

cin >> numero >> horas >> pay;
salario = pay * horas;
cout << "NUMBER = " << numero << endl << "SALARY = U$ " <<setprecision(2) << fixed << salario << endl;

}