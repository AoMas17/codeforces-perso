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
    int n, k; cin >> n >> k;
    vector<int> v(n * k + 1);
    vector<int> w(k);
    FORi(k)
    {
        int a; cin >> a;
        v[a] = 1;
        w[i] = a;
    }
    int ind = 1;
    FORi(k)
    {
        cout << w[i] << " ";
        int count = 1;
        while (count < n)
        {
            if (v[ind] == 0)
            {
                cout << ind << " ";
                count++;
            }
            ind++;
        }
        cout << endl;
    }
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
