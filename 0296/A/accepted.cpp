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
    int n; cin >> n;
    map<int,int> m;
    FORi(n) {
        int a; cin >> a;
        m[a]++;
    }
    int limit = n / 2 + n % 2;
    for (auto el : m) {
        //cout << el.first << " " << el.second << endl;
        if (el.second > limit) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
	
int main(){ 
    Solve();
    return 0;
}
