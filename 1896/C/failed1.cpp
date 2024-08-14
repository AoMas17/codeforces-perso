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
    ll n, x; cin >> n >> x;
    vector<pair<ll,ll>> a(n);
    vector<ll> b(n);
    FORi(n) {
        ll k; cin >> k;
        a[i] = (pair<ll, ll>){k, i};
    }
    FORi(n)
        cin >> b[i];
    sort(a.begin(), a.end(), [](pair<ll, ll> a, pair<ll, ll> b) {return a.first < b.first; });
    sort(b.begin(), b.end());

    ll ia = 0;
    ll ib = 0;
    ll deb = 0;
    ll fin = n - 1;
    vector<ll> minimal(n);
    while (ib < n) {
        if (a[ia].first > b[ib]) {
            ia--;
            minimal[deb++] = b[ib];
        }
        else
            minimal[fin--] = b[ib];
        ia++; ib++;
    }
    ll bmin = ib - ia;

    ia = n;
    ib = n;
    deb = 0;
    fin = n - 1;
    vector<ll> maximal(n);
    while (ib >= 0) {
        ia--; ib--;
        if (a[ia].first <= b[ib]) {
            ia++;
            maximal[fin--] = b[ib];
        }
        else
            maximal[deb++] = b[ib];
    }
    ll bmax = n - ia;

    ll beauty = 0;
    FORi(n)
        if (a[i].first > b[i])
            beauty++;

    //cout << "bmax, bmin : " << bmax << " " << bmin << endl;

    if (x < bmin || x > bmax) {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    FORi(n) {
        cout << minimal[i] << " ";
    }
    cout << endl;
    FORi(n) {
        cout << maximal[i] << " ";
    }
    cout << endl;
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
