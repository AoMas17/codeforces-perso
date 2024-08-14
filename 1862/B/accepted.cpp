#include <iostream>
#include <vector>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
	int n; cin >> n;
	vector<int> v(n);
	for(int i = 0; i < n; i++)
		cin >> v[i];
	int rn = n;
	vector<int> rv;
	rv.push_back(v[0]);
	for(int i = 1; i < n; i++){
		if(v[i-1] > v[i]){
			rn++;
			rv.push_back(v[i]);
		}
		rv.push_back(v[i]);
	}
	cout << rn << endl;
	for(int el : rv)
		cout << el << ' ';
	cout << endl;
}

int main() { 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
