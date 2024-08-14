#include <iostream>
#include <vector>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
    int n; cin >> n;
	int b = 1;
	int cur;
	for(int i = 0; i < n; i++){
		cin >> cur;
		if(b == cur)
			b++;
		b++;
	}
	cout << b - 1 << endl;
}

int main() { 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
