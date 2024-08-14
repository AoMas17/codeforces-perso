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
    set<int> s;
    int p; cin >> p;
    FORi(p) {
        int a; cin >> a;
        s.insert(a);
    }
    cin >> p;
    FORi(p) {
        int a; cin >> a;
        s.insert(a);
    }
    if (s.size() == n)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;
}
	
int main(){ 
    Solve();
    return 0;
}
