#include <iostream>
#include <vector>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
    int n; cin >> n;
	vector<int> v;
	v.push_back(17);
	v.push_back(19);
	for(int i = 2; i < n; i++){
		int tmp = 19 + i;
		 while (3 * tmp % (v[i-1] + v[i-2]) == 0)
			tmp++;
		v.push_back(tmp);
	}
	for(int el : v)
		cout << el << " ";
	cout << endl;
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
