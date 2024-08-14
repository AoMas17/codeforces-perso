#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
	int n; cin >> n;
	vector<int> v(n);
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	int res = 0;
	int first = 0;
	int t = n;
	while(n){
		int i = first;
		int cur = 0;
		while(i < t && v[i] == 0){
			i++; first++;
		}
		cur = v[i];
		v[i] = 0;
		n--; first++; i++; res++;
		bool cond = i < t;
		while(cond){			
			if(v[i] == 0 || v[i] == cur)
				i++;
			else if(v[i] == cur + 1){
				cur++; v[i] = 0; i++; n--;
			}
			else
				cond = false;
			cond = cond && i < t;
		}	
	}
	cout << res << endl;
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
