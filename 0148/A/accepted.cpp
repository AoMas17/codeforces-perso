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
    int k, l, m, n; cin >> k >> l >> m >> n;
	int d; cin >> d;
	set<int> s;
	for (int i = 0; i <= d; i+=k)
		s.insert(i);
	for (int i = 0; i <= d; i+=l)
		s.insert(i);
	for (int i = 0; i <= d; i+=m)
		s.insert(i);
	for (int i = 0; i <= d; i+=n)
		s.insert(i);
	cout << s.size() - 1 << endl;
}
	
int main(){ 
    init; 
	Solve();
    return 0;
}
