#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double x, y;
    cin >> x;
    cout << fixed << "N[" << 0 << "] = " << setprecision(4) << x << endl;
    for(int i=1; i<100; i++){
        x/=2;
        cout << fixed << "N[" << i << "] = " << setprecision(4) << x << endl;
    }
    return 0;
}