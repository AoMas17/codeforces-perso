#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int result(vector<int> v, int n, int k, int t){
		if(t != -1)
			v.erase(v.begin()+t);
		if(t < 1)
			t = 1;
		for(int i = t - 1; i < n - 1; i++){
			int diff = abs(v[i] - v[i+1]);
			if(diff > k){
				vector<int> v1 = v;
				vector<int> v2 = v;
				int a = result(v1, n-1, k, i);
				int b = result(v2, n-1, k, i+1);
				if(a < b)
					return 1 + a;
				return 1 + b;
			}
		}
		return 0;
}

void Solve(){
	int n, k; cin >> n; cin >> k;
	vector<int> v;
	for(int i = 0; i < n; i++){
		int tmp; cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());
	cout << result(v, n, k, -1) << endl;
}


int main() {
    init; int t; cin >> t;
    while(t--)
        Solve();
    return 0;
}