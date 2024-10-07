#include <iostream>
#include <cmath>
using namespace std;

#define N 8
int main(){
    int a[N], b[N], i;
    for(int i=0; i<N; i++){
        cin >> a[i];
        b[i]=a[i]*3;
        cout << b[i] << endl;
    }
}