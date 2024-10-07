#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int v[6], j=0, k=0, par[6], impar[6], var;
    for(int i=0; i<6; i++){
        cin >> v[i];
        if(v[i]%2==0){
            par[j]=v[i];
            j++;
        }else{
            impar[k]=v[i];
            k++;
        }
    }
    for(int var=0; var<j; var++){
        cout << "par -> " << par[var] << endl;
    }
    for(int var=0; var<k; var++){
        cout << "impar -> " << impar[var] << endl;
    }
}