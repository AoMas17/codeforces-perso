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

vector<ll> get_luck(ll nb)
{
    vector<ll> res;

    if (nb > 10E9)
        return res;
    
    ll q = nb * 10 + 4;
    ll s = nb * 10 + 7;
    res.push_back(q);
    res.push_back(s);
    
    vector<ll> r1 = get_luck(q);
    vector<ll> r2 = get_luck(s);

    for (auto el : r1)
        res.push_back(el);

    for (auto el : r2)
        res.push_back(el);
    
    return res;
}

void Solve(){
    vector<ll> v = get_luck(0);
    sort(v.begin(), v.end());

    int l, r; cin >> l >> r;
    
    ll ind = 0;
    while (v[ind] < l) ind++;

    ll res = 0;

    ll i = l;
    while (i <= r)
    {
        if (v[ind] <= r)
        {
            res += v[ind] * (v[ind] - i + 1);
        }

        else
        {
            res += v[ind] * (r - i + 1);
        }
        i = v[ind] + 1;
        ind++;
    }

    cout << res << endl;
}
	
int main(){ 
    init;
    Solve();
    return 0;
}
