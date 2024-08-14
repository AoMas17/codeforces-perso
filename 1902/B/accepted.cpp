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
    ll n, P, l, t; cin >> n >> P >> l >> t;
    ll nbPracticals = n / 7;
    if (n % 7)
        nbPracticals++;
    ll PointsPracticals = nbPracticals * t + (nbPracticals / 2 + nbPracticals % 2) * l;
    if (PointsPracticals >= P) {
        ll res = P / (t * 2 + l);
        if (P % (t * 2 + l))
            res++;
        while ((res - 1) * (t * 2 + l) >= P)
            res--;
        cout << n - res << endl;
    }
    else {
        ll Pleft = P - PointsPracticals;
        ll res = nbPracticals / 2 + nbPracticals % 2;
        res += Pleft / l;
        if (Pleft % l)
            res++;
        cout << n - res << endl;
    }
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
