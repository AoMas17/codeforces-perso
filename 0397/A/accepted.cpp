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
    int l, r; cin >> l >> r;
    n--;
    set<int> s;
    for (int i = l; i < r; i++) {
        s.insert(i);
    }
    while (n--) {
        int a, b; cin >> a >> b;
        vector<int> toerase;
        for (auto el : s) 
            if (el >= a && el < b)
                toerase.push_back(el);
        for (auto el : toerase)
            s.erase(el);
    }
    cout << s.size() << endl;
}
	
int main(){ 
    init;
    Solve();
    return 0;
}
