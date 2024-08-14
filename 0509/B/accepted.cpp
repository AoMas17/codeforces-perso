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
    int n, k; cin >> n >> k;
    vector<int> v(n);
    FORi(n)
        cin >> v[i];
    int mini = v[0];
    int maxi = v[0];
    FORi(n) {
        mini = min(mini, v[i]);
        maxi = max(maxi, v[i]);
    }
    if (maxi - mini > k)
        cout << "NO" << endl;
    else {
        cout << "YES" << endl;
        for (int el : v) {
            for (int i = 0; i < mini; i++)
                cout << 1 << " ";
            int remain = el - mini + 1;
            for (int i = 1; i < remain; i++)
                cout << i << " ";
            cout << endl;
        }
    }
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
