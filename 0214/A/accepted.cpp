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

bool check(int a, int b, int n, int m)
{
    return a * a + b == n && a + b * b == m;
}

void Solve(){
    int n, m;
    cin >> n >> m;
    int count = 0;
    for (int i = 0; i <= max(n, m); i++)
    {
        for (int j = max(n, m); j >= 0; j--)
        {
            if (check(i, j, n, m))
            {
                count++;
            }
        }
    }
    cout << count << endl;;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
