#include <iostream>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
	int n; cin >> n;
	int max = 0; int ind = 0;
	for (int i = 1; i <= n; i++){
		int a, b; cin >> a; cin >> b;
		if (a <= 10){
			if (b > max){
				max = b;
				ind = i;
			}	
		}
	}
	cout << ind << endl;
}

int main() {
    init; int t; cin >> t;
    while(t--)
        Solve();
    return 0;
}
