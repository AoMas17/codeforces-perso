#include <iostream>
#include <string>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
	string a;
	cin >> a;
	if (a[0] == 'a' || a[1] == 'b' || a[2] == 'c')
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
