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
    string s; cin >> s;
    ll pivot;
    ll sum = 0;
    FORi(s.size()) {
        if (s[i] == '^')
            pivot = i;
    }
    FORi(s.size()) {
        if (s[i] >= '0' && s[i] <= '9') {
            if (i < pivot) {
                sum += (s[i] - '0') * (pivot - i);
            }
            else
                sum -= (s[i] - '0') * (i - pivot);
        }
    }
    if (sum > 0)
        cout << "left" << endl;
    else if (sum == 0)
        cout << "balance" << endl;
    else
        cout << "right" << endl;
}
	
int main(){ 
    Solve();
    return 0;
}
