#include <iostream>
#include <vector>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
    long long n, k, x;
	cin >> n >> k >> x;
	
	long long maxi = n * k - (k * (k - 1)) / 2;
	long long mini = k * (k + 1) / 2;
	
	if (x < mini || x > maxi)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
