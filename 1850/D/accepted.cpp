#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int result(vector<int> v, int n, int k){
		int max = 0;
		int current = 1;
		for(int i = 0; i < n - 1; i++){
			int diff = v[i+1] - v[i];
			if(diff > k){
				if(current > max){
					max = current;
				}
				current = 1;
			}
			else
				current++;
		}
		if(current > max)
			max = current;
		return n - max;
}

void Solve(){
	int n, k; cin >> n; cin >> k;
	vector<int> v;
	for(int i = 0; i < n; i++){
		int tmp; cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());
	cout << result(v, n, k) << endl;
}


int main() {
    init; int t; cin >> t;
    while(t--)
        Solve();
    return 0;
}