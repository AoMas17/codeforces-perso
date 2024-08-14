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
    vector<int> v(3);
    int nb1 = 0;
    FORi(3) {
        cin >> v[i];
        if (v[i] == 1)
            nb1++;
    }
    if (nb1 == 2 && v[0] == 1 && v[2] == 1) {
        cout << v[1] + 2 << endl;
        return;
    }
    if (nb1 == 1) {
        if (v[1] == 1) {
            if (v[0] < v[2])
                v[0]++;
            else
                v[2]++;
            cout << v[0] * v[2] << endl;
        }
        else if (v[0] == 1)
            cout << (v[1] + 1) * v[2] << endl;
        else
            cout << (v[1] + 1) * v[0] << endl;
    }
    sort(v.begin(), v.end());
    if (nb1 == 2) {
        cout << 2 * v[2] << endl;
    }
    else if (nb1 == 3)
        cout << 3 << endl;
    else if (nb1 == 0)
        cout << v[0] * v[1] * v[2] << endl;
}
	
int main(){ 
    Solve();
    return 0;
}
