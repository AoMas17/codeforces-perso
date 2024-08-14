#include <iostream>
#include <string>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
	int n; int k; cin >> n; cin >> k;
	string s;
	cin >> s;
	int res = 0;
	for(int i = 0; i < n; i++){
		if(s[i] == 'B'){
			res++;
			i += k - 1;
		}
	}
	cout << res << endl;
}

int main() {
    init; int t; cin >> t;
    while(t--)
        Solve();
    return 0;
}
