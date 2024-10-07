#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;
 
int main() {

 int Cv, Ce, Cs, Fv, Fe, Fs, CFINAL, FFINAL;
 //(0 ≤ Cv, Ce, Fv, Fe ≤ 100), (-1000 ≤ Cs, Fs ≤ 1000)

 cin >> Cv >> Ce >> Cs >> Fv >> Fe >> Fs;
 Cv = Cv * 3;
 Fv = Fv * 3;
 CFINAL = Cv + Ce;
 FFINAL = Fv + Fe; 

if (CFINAL > FFINAL){
    cout << "C" << endl;
}
else if (FFINAL > CFINAL){
    cout << "F" << endl;
}
else if (CFINAL == FFINAL){
    if (Cs > Fs){
        cout << "C" << endl;
        
    }
    else if (Cs < Fs){
        cout << "F" << endl;
}
     else if (Cs = Fs){
        cout << "=" << endl;
     }

    return 0;
}
}