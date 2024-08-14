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
    int d, sumTime; cin >> d >> sumTime;
    vector<int> mins(d);
    vector<int> maxs(d);
    FORi(d) {
        cin >> mins[i];
        cin >> maxs[i];
    }
    int sum = 0;
    int margin = 0;
    FORi(d) {
        sum += mins[i];
        margin += maxs[i];
    }
    int i = 0;
    while (i < d && sum < sumTime) {
        if (sumTime - sum < maxs[i] - mins[i]) {
            mins[i] += sumTime - sum;
            sum = sumTime;
        }
        else {
            sum += maxs[i] - mins[i];
            mins[i] = maxs[i];
        }
        i++;
    }
    if (sumTime == sum) {
        cout << "YES" << endl;
        for (auto el : mins)
            cout << el << " ";
        cout << endl;
    }
    else
        cout << "NO" << endl;
}
	
int main(){ 
    init;
    Solve();
    return 0;
}
