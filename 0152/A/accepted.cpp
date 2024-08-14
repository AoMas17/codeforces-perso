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
    int n, m; cin >> n >> m;
    vector<int> v(n);
    vector<string> grades(n);
    FORi(n) 
        cin >> grades[i];
    FORi(m) {
        char max = grades[0][i];
        vector<int> maxes = { 0 };
        for (int j = 1; j < n; j++) {
            if (!v[j] && grades[j][i] == max)
                maxes.push_back(j);
            else if (grades[j][i] > max) {
                max = grades[j][i];
                maxes = { j };
            }
        }
        for (int el : maxes)
            v[el] = 1;
    }
    int res = 0;
    for (int el : v)
        res += el;
    cout << res << endl;
}
	
int main(){ 
    Solve();
    return 0;
}
