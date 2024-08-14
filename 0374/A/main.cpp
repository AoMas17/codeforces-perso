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

pair<int, int> rotate90(int i, int j, int n, int m) {
    if ((n % 2 && i == n / 2) && (m % 2 && j == m / 2))
        return make_pair(i, j);
    if ((n % 2 && i == n / 2)){
        if (i <= n / 2) {
            int tmp = i;
            i = j;
            j = tmp;
        }
        else {
            int tmp = j;
            j = m - n + i;
            i = tmp;
        }
    }
    else if (m % 2 && j == m / 2) {
        if (j <= m / 2) {
            int tmp = j;
            j = m - i - 1;
            i = tmp;
        }
        else {
            int tmp = j;
            j = n - i - 1;
            i = tmp;
        }
    }
    else {
        if (i <= n / 2) {
            if (j <= m / 2) {
                j = m - j - 1;
            }
            else {
                i = n - i - 1;
            }
        }
        else {
            if (j <= m / 2) {
                i = n - i - 1;
            }
            else {
                j = m - j - 1;
            }
        }
    }
    return make_pair(i, j);
}

void Solve(){
    int n, m, i, j, a, b; cin >> n >> m >> i >> j >> a >> b;
    if ((i == 1 && j == 1) || (i == n && j == 1) || (i == 1 && j == m) || (i == n && j == m)) {
        cout << 0 << endl;
        return;
    }
    i--; j--;
    int fi = i;
    int fj = j;
    if ((i - a < 0 && i + a >= n) || (j - b < 0 && j + b >= m)) {
        cout << "Poor Inna and pony!" << endl;
    }
    else {
        int res = INT_MAX;
        if (i % a == 0 && j % b == 0) {
            int rest = abs(j - (i / a) * b);
            if ((rest / b) % 2 == 0) {
                int val = i / a + rest / b;
                res = min(res, val);
            }
        }
        //cout << i << " " << j << endl;
        i = n - fi - 1;
        j = fj;
        if (i % a == 0 && j % b == 0) {
            int rest = abs(j - (i / a) * b);
            if ((rest / b) % 2 == 0) {
                int val = i / a + rest / b;
                res = min(res, val);
            }
        }
        //cout << i << " " << j << endl;
        i = fi;
        j = m - fj - 1;
        if (i % a == 0 && j % b == 0) {
            int rest = abs(j - (i / a) * b);
            if ((rest / b) % 2 == 0) {
                int val = i / a + rest / b;
                res = min(res, val);
            }
        }
        //cout << i << " " << j << endl;
        i = n - fi - 1;
        j = m - fj - 1;
        if (i % a == 0 && j % b == 0) {
            int rest = abs(j - (i / a) * b);
            if ((rest / b) % 2 == 0) {
                int val = i / a + rest / b;
                res = min(res, val);
            }
        }
        //cout << i << " " << j << endl;
        if (res == INT_MAX) 
            cout << "Poor Inna and pony!" << endl;
        else
            cout << res << endl;
    }
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
