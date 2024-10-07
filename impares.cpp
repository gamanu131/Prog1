#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int x;
    cin >> x;
    for(int i=0; i <= x; i--){
        if(x%2==1){
            cout << x << endl;
        }
    }
}