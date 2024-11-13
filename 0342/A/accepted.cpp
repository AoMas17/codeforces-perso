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

void end()
{
    cout << -1 << endl;
    return;
}

void Solve(){
    int n; cin >> n;
    map<int, int> m;
    FORi(n){
        int x; cin >> x;
        m[x]++;
    }
    vector<int> v;
    FORi(n / 3)
    {
        if (m[1] < 1)
        {
            return end();
        }
        m[1]--;
        v.push_back(1);
        if (m[2])
        {
            m[2]--;
            v.push_back(2);
            if (m[4])
            {
                m[4]--;
                v.push_back(4);
            }
            else if (m[6])
            {
                m[6]--;
                v.push_back(6);
            }
            else
                return end();
        }
        else if (m[3])
        {
            m[3]--;
            v.push_back(3);
            if (m[6])
            {
                m[6]--;
                v.push_back(6);
            }
            else
                return end();
        }
        else
        {
            return end();
        }
    }
    FORi(n / 3)
    {
        FORj(3)
        {
            cout << v[i * 3 + j] << " ";
        }
        cout << endl;
    }
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
