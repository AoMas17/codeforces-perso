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
    ll n; cin >> n;
    ll left = -2 * 1000000000;
    ll right = 2 * 1000000000;
    ll leftprec;
    ll rightprec;
    FORi(n) {
        leftprec = left;
        rightprec = right;
        string s; cin >> s;
        string tonb; cin >> tonb;
        string B; cin >> B;
        ll nb = stoi(tonb);
        if (s[0] == '<') {
            if (s[1] == '=') {
                if (B == "Y")
                    right = nb;
                else
                    left = nb + 1;
            }
            else {
                if (B == "Y")
                    right = nb - 1;
                else
                    left = nb;
            }
        }
        else {
            if (s[1] == '=') {
                if (B == "Y")
                    left = nb;
                else
                    right = nb - 1;
            }
            else {
                if (B == "Y")
                    left = nb + 1;
                else
                    right = nb;
            }
        }
        if (left < leftprec)
            left = leftprec;
        if (right > rightprec)
            right = rightprec;
        if (left > right) {
            cout << "Impossible" << endl;
            return;
        }
    }
    cout << (left + right) / 2 << endl;
}
	
int main(){ 
    init;
    Solve();
    return 0;
}
