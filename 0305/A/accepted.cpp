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
    set<int> res;
    bool m10 = true;
    bool dig = true;
    int bs = -1;
    FORi(n) {
        int tmp; cin >> tmp;
        if (tmp == 0 || tmp == 100)
            res.insert(tmp);
        else if (m10 && tmp % 10 == 0) {
            res.insert(tmp);
            m10 = false;
        }
        else if (dig && tmp < 10) {
            res.insert(tmp);
            dig = false;
        }
        else
            bs = tmp;
    }
    if (res.size() == 0) {
        cout << 1 << endl << bs << endl;
        return;
    }
    if (bs != -1) {
        bool cond = true;
        for (auto el : res) {
            if (0 < el && el < 100)
                cond = false;
        }
        if (cond)
            res.insert(bs);
    }
    cout << res.size() << endl;
    for (int el : res)
        cout << el << " ";
    cout << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
