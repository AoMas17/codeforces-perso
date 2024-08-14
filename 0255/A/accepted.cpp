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
    vector<int> v(3);
    FORi(n) {
        int a; cin >> a;
        v[i % 3] += a;
    }
    int m = 0;
    if (v[1] > v[0])
        m = 1;
    if (v[2] > v[m])
        m = 2;
    if (m == 0)
        cout << "chest" << endl;
    else if (m == 1)
        cout << "biceps" << endl;
    else if (m == 2)
        cout << "back" << endl;
}
	
int main(){ 
    Solve();
    return 0;
}
