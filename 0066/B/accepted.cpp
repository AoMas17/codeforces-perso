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
    int n; cin >> n;
    vector<int> v(n);
    FORi(n)
        cin >> v[i];
    int count = 0;
    FORi(n) {
        int left = i - 1;
        int right = i + 1;
        int res = 1;
        while (left >= 0 && v[left] <= v[left + 1]) {
            left--;
            res++;
        }
        while (right < n && v[right] <= v[right - 1]) {
            right++;
            res++;
        }
        count = max(res, count);
    }
    cout << count << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
