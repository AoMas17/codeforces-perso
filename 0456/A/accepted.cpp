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
    if (n == 1) {
        cout << "Poor Alex" << endl;
        return;
    }
    vector<pair<int, int>> v(n);
    FORi(n) {
        int a, b; cin >> a >> b;
        v[i] = (pair<int, int>){ a, b };
    }
    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) {return a.first < b.first; });

    int ind = 1;
    int maxqual = v[0].second;
    while (ind < n && v[ind - 1].first == v[ind].first) {
        ind++;
        maxqual = max(maxqual, v[ind].second);
    }
    while (ind < n) {
        int price = v[ind].first;
        int nextmaxqual = maxqual;
        while (ind < n && v[ind].first == price) {
            if (v[ind].second < maxqual) {
                cout << "Happy Alex" << endl;
                return;
            }
            nextmaxqual = max(nextmaxqual, v[ind].second);
            ind++;
        }
        maxqual = nextmaxqual;
    }
    cout << "Poor Alex" << endl;

}
	
int main(){ 
    Solve();
    return 0;
}
