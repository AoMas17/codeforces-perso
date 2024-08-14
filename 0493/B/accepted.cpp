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

int lexcomp(vector<int> s1, vector<int> s2) {
    int length = min(s1.size(), s2.size());
    for (int i = 0; i < length; i++) {
        if (s1[i] < s2[i])
            return -1;
        else if (s1[i] > s2[i])
            return 1;
    }
    return 0;
}

void Solve(){
    ll n; cin >> n;
    ll cur;
    vector<int> s1;
    vector<int> s2;
    int lex = 0;
    ll tot1 = 0;
    ll tot2 = 0;
    FORi(n) {
        cin >> cur;
        if (cur > 0) {
            tot1 += cur;
            s1.push_back(cur);
        }
        else {
            tot2 -= cur;
            s2.push_back(-cur);
        }
    }
    int win = lexcomp(s1, s2);
    //cout << s1 << " " << s2 << " " << win << endl;
    if (win == 1)
        lex = 1;
    else if (win == -1)
        lex = -1;
    if (tot1 > tot2)
        cout << "first" << endl;
    else if (tot1 < tot2)
        cout << "second" << endl;
    else {
        if (lex == 1)
            cout << "first" << endl;
        else if (lex == -1)
            cout << "second" << endl;
        else {
            if (cur > 0)
                cout << "first" << endl;
            else
                cout << "second" << endl;
        }
    }
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
