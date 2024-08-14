#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define ull unsigned long long

void Solve(){
    ull n; cin >> n;
    vector<ull> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    ull ind = n - 1;
    ull res = 0;
    while (ind > 0) {
        //ull resprec = res;
        //cout << "actual nb : " << v[ind - 1] << " divideto : " << v[ind] << endl;
        if (v[ind - 1] > v[ind]) {
            ull k = v[ind - 1] / v[ind];
            if ((v[ind - 1] % v[ind]))
                k++;
            res += k - 1;
            v[ind - 1] = v[ind - 1] / k;
        }
        //cout << "nb ops : " << res - resprec << endl;
        ind--;
    }
    cout << res << endl;
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
