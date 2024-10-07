#include <iostream>
#include <iomanip>
#define DIAS 31
using namespace std;

int main(){
    int ht[DIAS + 1] = {0};
    int dia, horas, i;
    while (cin >> dia && dia != 0){
        cin >> horas;
        ht[dia] = horas;
    }
    for (i = 1; i < DIAS + 1; i++){
        ht[0] += ht[i];
    }
    cout << ht[0] << " horas" << endl;
}