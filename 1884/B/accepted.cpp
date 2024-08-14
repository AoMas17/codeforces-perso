#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define ull unsigned long long

void Solve(){
	ull n; cin >> n;
	string s; cin >> s;
	vector<ull> v;

	for (ull i = 0; i < n; i++)
		if (s[n - i - 1] == '0')
			v.push_back(i);
	ull lp = v.size();

	for (ull i = 1; i < lp; i++)
		v[i] += v[i - 1] - i;

	for (ull i = 0; i < n; i++){
		if (i + 1 > lp)
			cout << "-1 ";
		else
			cout << v[i] << " ";
	}
	cout << endl;
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
