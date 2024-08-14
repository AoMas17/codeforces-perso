#include <iostream>
#include <vector>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
	int n; cin >> n;
	int sf; int ef; cin >> sf; cin >> ef;
	int sc; int ec;
	n--; int cond = 1;
	while(n--){
		cin >> sc; cin >> ec;
		if(sc >= sf && ec >= ef){
			cond = 0;
		}
	}
	if(cond)
		cout << sf << endl;
	else
		cout << -1 << endl;
}

int main() { 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
