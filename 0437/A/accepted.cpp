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
    string A, B, C, D; cin >> A >> B >> C >> D;
    vector<string> v = { A, B, C, D };
    string shorter2T = "-1";
    FORi(4) {
        bool cond = true;
        FORj(4) {
            if (i != j && (v[i].size() - 2) * 2 > (v[j].size() - 2))
                cond = false;
        }
        if (cond) {
            if (shorter2T == "-1")
                shorter2T = v[i];
            else {
                cout << "C" << endl;
                return;
            }
        }
    }

    string longer2T = "-1";
    FORi(4) {
        bool cond = true;
        FORj(4) {
            if (i != j && (v[i].size() - 2) < (v[j].size() - 2) * 2)
                cond = false;
        }
        if (cond) {
            if (longer2T == "-1")
                longer2T = v[i];
            else {
                cout << "C2" << endl;
                return;
            }
        }
    }
    //cout << shorter2T << " " << longer2T << endl;
    if (shorter2T == "-1" && longer2T != "-1")
        cout << longer2T[0] << endl;
    else if (shorter2T != "-1" && longer2T == "-1")
        cout << shorter2T[0] << endl;
    else
        cout << "C" << endl;

}
	
int main(){ 
    Solve();
    return 0;
}
