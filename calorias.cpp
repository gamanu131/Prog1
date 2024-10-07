#include <stdio.h>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
 
int main() {
    
    int prato, sobremesa, bebida, total; 
    cin >> prato >> sobremesa >> bebida;

    switch (prato){
    case 1:
        total += 180;
        break;

    case 2:
        total += 230;
        break;

    case 3:
        total += 250;
        break;

    case 4:
        total += 350;
        break;

    default:
        break;}

    switch (sobremesa){
    case 1:
        total += 75;
        break;

    case 2:
        total += 110;
        break;

    case 3:
        total += 170;
        break;

    case 4:
        total += 200;
        break;

    default:
        break;}

    switch (bebida){
    case 1:
        total += 20;
        break;

    case 2:
        total += 70;
        break;

    case 3:
        total += 100;
        break;

    case 4:
        total += 65;
        break;

    default:
        break;}
    cout << "O Total de calorias = " << total << endl;
    return 0;
}