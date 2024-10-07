#include <iostream>
using namespace std;

int main(){
    int v, m, pos;

    cin >> m;
    pos=1;
    for(int i=1; i<100; i++){
        cin >> v;
        if(v > m){
            m=v;
            pos=i+1;
        }
    }
    cout << m << endl;
    cout << pos << endl;
}