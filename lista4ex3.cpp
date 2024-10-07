#include <iostream>
#include <cmath>
using namespace std;
#define n 15

int main(){
    int a[n], b[n], aux=1, fac=1;
    for(int i=0; i<n; i++){
        cin >> a[i];
        while(aux <= a[i]){
            fac *= aux;
            aux++;
        }
        b[i]=fac;
        cout << a[i] << "! = " << b[i] << endl;
    }
}