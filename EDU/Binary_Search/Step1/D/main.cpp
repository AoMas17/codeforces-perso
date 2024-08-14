#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int left(vector<int> v, int x) {
    int n = v.size();
    int l = 0, r = n, m;
    while (l < r) {
        m = (l + r) / 2;
        if (v[m] == x && m - 1 > 0 && v[m - 1] < v[m])
            break;
        else if (v[m] > x)
            r = m - 1;
        else
            l = m + 1;
    }
    while (m >= 0 && v[m] >= x)
        m--;
    if (m == -1)
        return 1;
    while (m < n && v[m] < x)
        m++;
    m = min(n - 1, m);
    return m + 1;
}

int right(vector<int> v, int x) {//1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
    int n = v.size();
    int l = 0, r = n, m;
    while (l < r) {
        m = (l + r) / 2;
        if (v[m] == x && m + 1 < n && v[m + 1] > v[m])
            break;
        else if (v[m] > x)
            r = m - 1;
        else
            l = m + 1;
    }
    while (m < n && v[m] <= x)
        m++;
    m = min(n - 1, m);
    while (m > 0 && v[m] > x)
        m--;
    return m + 1;
}

void Solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    int k; cin >> k;
    while (k--) {
        int l, r;
        cin >> l >> r;
        if (l > v[n - 1] || r < v[0]) {
            cout << 0 << " ";
            continue;
        }
        int res = right(v, r) - left(v, l) + 1;
        cout << res << " ";
    }
    cout << endl;

}

int main() {
    Solve();
    return 0;
}
