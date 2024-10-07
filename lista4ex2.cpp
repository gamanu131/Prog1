#include <iostream>
#include <cmath>
using namespace std;

#define n 20
int main(){
    int a[n], b[n], c[n];
    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i];
        c[i]=a[i]-b[i];
        cout << c[i] << endl;
    }
}