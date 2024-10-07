#include <iostream>                 
#include <iomanip>
#include <cmath>
using namespace std;
 
int main(){
    int n, j;
    cin >> n;
    int r[n];
    for(int i=0; i<n; i++){
        cin >> r[i];
        if(r[i]<r[i-1]){
            cout << i << endl;
        }
    }
    
}