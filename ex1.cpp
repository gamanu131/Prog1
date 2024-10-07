#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;
 
int main() {
 
 int N, P, Q, resultado;
 char C;
 //N (1<= N <=500000), P (1<= P <=1000), Q (1<= Q <=1000)
 cin >> N;
 cin >> P >> C >> Q;
 if (C == '+'){
     resultado = P+Q; 
 }
 else{
     resultado = P*Q;
 }

if (resultado > N){
    cout << "OVERFLOW" << endl;
}
 else{
    cout << "OK" << endl; 
 }
    return 0;
}