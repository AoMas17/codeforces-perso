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

int fmax(vector<int> v){
    int maxi = 0;
    FORi(v.size()){
        if (v[i] > v[maxi]) 
            maxi = i;
    }
    return maxi;
}

void Solve(){
    int n, m;
    cin >> n >> m;
    vector<int> v(m);
    vector<int> w(m);
    FORi(m) cin >> v[i];
    FORi(m) w[i] = v[i];
    sort(v.begin(), v.end());
    sort(w.begin(), w.end());
    int mini = 0;
    int ind = 0;
    for (int i = 0; i < n; i++){
        mini += v[ind];
        v[ind]--;
        if (v[ind] == 0) ind++;
    }
    int maxi = 0;
    FORi(n){
        int tmp;
        maxi += w[fmax(w)];
        w[fmax(w)]--;
    }
    cout << maxi << " " << mini << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
