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

vector<string> gen(vector<string> v, int x, int n)
{
    if (x == n)
        return v;
    
    vector<string> res;
    for (size_t i = 0; i < v.size(); i++)
    {
        res.push_back("0" + v[i]);
    }
    for (int i = v.size() - 1; i >= 0 ; i--)
    {
        res.push_back("1" + v[i]);
    }
    return gen(res, x + 1, n);
}

void Solve(){
    int n; cin >> n;
    vector<string> v = { "0", "1" };
    vector<string> res = gen(v, 1, n);
    for (auto el : res)
    {
        cout << el << endl;
    }
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
