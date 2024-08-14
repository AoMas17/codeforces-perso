#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
    unsigned long long n, m;
	cin >> n >> m;
	int a = n; int b = m;
	while(a % 2 == 0)
		a /= 2;
	while(b % 2 == 0)
		b /= 2;
	if((b % a != 0 || a == 1) && b != 1 && a != b){
		cout << -1 << endl;
		return;
	}
	unsigned long long res = 0;
	unsigned long long r = n % m;
	int test = m % 2;
	while(r != 0){
		res += r;
		r = (2 * r) % m;
	}
	cout << res << endl;
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
