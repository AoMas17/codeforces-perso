#include <iostream>
#include <vector>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
    int n; cin >> n;
    int k; cin >> k;
	bool cond = true;
	while(n--){
		int el;
		cin >> el;
		if(cond && k == el){
			cout << "YES" << endl;
			cond = false;
		}
	}
	if(cond)
		cout << "NO" << endl;
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
