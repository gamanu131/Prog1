#include <iostream>
using namespace std;

int main(){
int B, E, R;
cin >> B >> E;
R = 1;
do {
R *= B;
} while (--E);
cout << R << endl;
}