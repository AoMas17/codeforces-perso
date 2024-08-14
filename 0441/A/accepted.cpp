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
    int n, v; cin >> n >> v;
    vector<int> res;
    FORi(n) {
        bool cond = false;
        int k; cin >> k;
        FORj(k) {
            int price; cin >> price;
            if (v > price)
                cond = true;
        }
        if (cond)
            res.push_back(i + 1);
    }
    cout << res.size() << endl;
    FORi(res.size())
        cout << res[i] << " ";
    cout << endl;
}
	
int main(){ 
    Solve();
    return 0;
}
