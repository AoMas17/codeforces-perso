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

vector<int> vcopy(vector<int> v) {
    vector<int> res(v.size());
    FORi(v.size())
        res[i] = v[i];
    return res;
}

void Solve(){
    int n; cin >> n;
    if (n == 1) {
        cout << 1 << endl;
        return;
    }
    vector<int> v = { n, n / 2 };
    vector<int> res;
    int ind = 1;
    while (ind > 0) {
        while (v[ind] > 0) {
            if (v[ind - 1] % v[ind] == 0) {
                if (v.size() > res.size())
                    res = vcopy(v);
                ll tmp = v[ind] / 2;
                if (tmp > 0) {
                    v.push_back(tmp);
                    ind++;
                }
                else {
                    v[ind]--;
                }
            }
            else
                v[ind]--;
        }
        v.erase(v.begin() + ind);
        ind--;
        v[ind]--;
    }
    for (auto el : res)
        cout << el << " ";
    cout << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
