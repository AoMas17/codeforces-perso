#include <iostream>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a+b >= 10 || b+c >= 10 || a+c >= 10)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}

int main() {
    init; int t; cin >> t;
    while(t--)
        Solve();
    return 0;
}
