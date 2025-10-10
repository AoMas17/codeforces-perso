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
    FORi(n){
        int x; cin >> x;
        m[x]++;
    }
    if (m[5] < 9 && m[0] == 0){
        cout << -1 << endl;
        return;
    }

    if (m[5] < 9)
    {
        cout << 0 << endl;
        return;
    }

    if (m[0] == 0)
    {
        cout << -1 << endl;
        return;
    }

    FORi(m[5] / 9){
        cout << "555555555";
    }
    FORi(m[0]){
        cout << "0";
    }
    cout << endl;
}
	
int main(){ 
    init;
    Solve();
    return 0;
}
