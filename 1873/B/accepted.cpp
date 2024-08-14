#include <iostream>
#include <vector>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
	int n; cin >> n;
	vector<int> v(n);
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}
	int min = v[0]; int ind = 0;
	for(int i = 1; i < n; i++){
		if(v[i] < min){
			min = v[i];
			ind = i;
		}
	}
	v[ind] = min + 1;
	int mult = 1;
	for(int i = 0; i < n; i++){
		mult *= v[i];
	}
	cout << mult << endl;	
}

int main() {
    init; int t; cin >> t;
    while(t--)
        Solve();
    return 0;
}
