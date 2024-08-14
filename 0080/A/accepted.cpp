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

bool IsPrime(int n){
	for (int i = 2; i * i <= n; i++){
		if (n % i == 0)
			return false;
	}
	return true;
}

void Solve(){
    int n, m; cin >> n >> m;
	int tmp = n; 
	if (IsPrime(tmp++)){
		while (tmp < m && !IsPrime(tmp)){
			tmp++;
		}
		if (tmp == m && IsPrime(tmp)){
			cout << "YES" << endl;
			return;
		}
	}
	cout << "NO" << endl;
}
	
int main(){ 
    init; 
	Solve();
    return 0;
}
