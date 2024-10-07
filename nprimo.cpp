#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
		int x, y;
		y=0;
		cin >> x;

		for (int i=1; i < x/2+1; i++){
			if(x%i == 0){
				y+=i;
            }
		}
		if (y==1)
			cout << x << " eh primo" << endl;
		else
			cout << x << " nao eh primo" << endl;
	}
}