#include <iostream>
#include <vector>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
	int n; cin >> n;
	vector<int> v(n);
	for(int i = 0; i < n; i++)
		cin >> v[i];
	for(int i = 0; i < n/2; i++){
		if(v[n - i - 1] != n - v[i] + 1 || n - i != v[n - i - 1]){
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
}

int main() { 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
