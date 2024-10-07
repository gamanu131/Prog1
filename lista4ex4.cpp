#include <iostream>
#include <cmath>
using namespace std;
#define n 15
#define x 30

int main(){
    int a[n], b[n], c[x], i;
    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i];
        c[i]=a[i];
        c[i+n]=b[i];
    }
    for(int i=0; i<x; i++){
        cout << c[i] << endl;
    }
}