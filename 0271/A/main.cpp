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

bool IsDis(int x) {
    set<int> s;
    FORi(4) {
        s.insert(x % 10);
        x /= 10;
    }
    return s.size() == 4;
}

void Solve(){
    int n; cin >> n;
    n++;
    while (!IsDis(n))
        n++;
    cout << n << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
