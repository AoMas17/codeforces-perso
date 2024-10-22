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

vector<string> perf(ll n, string prec){
	vector<string> res;
	if(prec == "" || stoll(prec) < n){
		res.push_back("4" + prec);
		vector<string> tmp = perf(n, "4" + prec);
		res.insert(res.end(), tmp.begin(), tmp.end());
		res.push_back("7" + prec);
		tmp = perf(n, "7" + prec);
		res.insert(res.end(), tmp.begin(), tmp.end());
	}
	return res;
}

bool eq47(string s){
	int n1 = 0, n2 = 0;
	for(auto el : s){
		if(el == '4')
			n1++;
		else
			n2++;
	}
	return n1 == n2;
}

void Solve(){
    int n; cin >> n;
	vector<string> v = perf(9999999999, "");
	string res = "99999999999";
	for (auto el : v){
		if(eq47(el) && stoll(el) >= n && stoll(res) > stoll(el))
			res = el;
	}
	cout << res << endl;	
}
	
int main(){ 
    init; 
	Solve();
    return 0;
}
