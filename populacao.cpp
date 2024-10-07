#include <iostream>
using namespace std;

int main(){
    double ga, gb;
    int pa, pb, times, t;
    times=0;
    cin >> t;
    while(t--){
        cin >> pa >> pb >> ga >> gb;
        while(pa <= pb && times <= 100){
            pa+= (double)(pa/100.00*ga);
            pb+= (double)(pb/100.00*gb);
            times++;
        }
        if(times > 100){
            cout << "Mais de 1 seculo." << endl;
        }else{
            cout << times << " anos." << endl;
        }
        times = 0;
    }
    return 0;
}