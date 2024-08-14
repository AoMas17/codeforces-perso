#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    while (k--) {
        int x; cin >> x;
        int l = 0, r = n, m;
        while (l < r) {
            m = (l + r) / 2;
            if (v[m] == x)
                break;
            else if (v[m] > x)
                r = m - 1;
            else
                l = m + 1;
        }
        while (m > 0 && v[m] >= x)
            m--;
        while (m < n && v[m] < x)
            m++;
        m++;
        cout << m << endl;
    }
}

int main() {
    Solve();
    return 0;
}
