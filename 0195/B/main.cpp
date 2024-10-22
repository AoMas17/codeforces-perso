#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FORi(a) for (int i = 0; i < a; i++)
#define FORj(a) for (int j = 0; j < a; j++)
#define FORk(a) for (int k = 0; k < a; k++)
#define ull unsigned long long
#define ll long long

void Solve(){
    int n, m; cin >> n >> m;
	vector<int> v(m);
	v[0] = (m + 1) / 2;
	if (m % 2){
		FORi(m / 2){
			v[i * 2 + 1] = v[0] - i - 1; 
		}
		FORi(m / 2){
			v[	i * 2 + 2] = v[0] + i + 1;
		}
	}
	else{
		v[1] = (m + 1) / 2 + 1;
		FORi(m / 2 - 1){
			v[(i + 1) * 2 + 1] = v[0] - i - 1; 
		}
		for(int i = 1; i < m / 2; i++){
			v[i * 2] = v[0] + i;
		}
	}
	v[m - 1] = m;
	int ind = 0;
	FORi(n){
		cout << v[ind++] << endl;
		ind %= m;
	}
}
	
int main(){ 
    init; 
	Solve();
    return 0;
}
