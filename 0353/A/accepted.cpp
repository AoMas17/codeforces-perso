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
    vector<int> up(n);
    vector<int> down(n);
    FORi(n) {
        cin >> up[i];
        cin >> down[i];
    }
    int oddup = 0;
    int odddown = 0;
    bool evenodd = false;
    FORi(n) {
        oddup = (oddup + up[i]) % 2;
        odddown = (odddown + down[i]) % 2;
        if (!evenodd && up[i] % 2 != down[i] % 2)
            evenodd = true;
    }
    if (oddup + odddown == 0)
        cout << 0 << endl;
    else if ((oddup + odddown) == 2 && evenodd)
        cout << 1 << endl;
    else
        cout << -1 << endl;
}
	
int main(){ 
    Solve();
    return 0;
}
