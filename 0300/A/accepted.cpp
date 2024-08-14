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
    set<int> s1;
    set<int> s2;
    set<int> s3;
    FORi(n) {
        if (v[i] < 0) {
            s1.insert(v[i]);
            v[i] = 0;
            break;
        }
    }
    FORi(n) {
        if (v[i] > 0) {
            s2.insert(v[i]);
            v[i] = 0;
            break;
        }
    }
    if (s2.size() == 0) {
        int count = 2;
        int ind = 0;
        while(count) {
            if (v[ind] < 0) {
                s2.insert(v[ind]);
                v[ind] = 0;
                count--;
            }
            ind++;
        }
    }
    FORi(n) {
        s3.insert(v[i]);
    }
    cout << s1.size() << " ";
    for (int el : s1) 
        cout << el << " ";
    cout << endl;
    cout << s2.size() << " ";
    for (int el : s2)
        cout << el << " ";
    cout << endl;
    cout << s3.size() << " ";
    for (int el : s3)
        cout << el << " ";
    cout << endl;
}
	
int main(){ 
    Solve();
    return 0;
}
