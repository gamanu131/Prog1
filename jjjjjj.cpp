#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int n, x, y, soma;
    cin >> n;
    for(int i=n; i <= n; i--){
        cin >> x >> y;
        if(i%2==1){
        soma += i;
        }
    }
    cout << soma;
}