#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
	int n, k;
	cin >> n >> k;
	vector<int> v(n);
	for(int i = 0; i < n; i++)
		cin >> v[i]; 
	while(k--){
		int mid;
		int x; cin >> x;
		int high = n;
		int low = 0;
		while(low < high){
			mid = (high + low) / 2;
			if(v[mid] < x)
				low = mid + 1;
			else if(v[mid] > x)
				high = mid;
			else
				high = low;
		}
		if(v[mid] == x)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}
	
int main(){ 
    Solve();
    return 0;
}
