#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void subrev(string &s, int a, int b){
  int last = a+ (b-a)/2;
  for (int i=a; i<=last; i++){
    swap(s[i], s[b-i+a]);
  }
}

void Solve(){
    int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	int l[k];
	int r[k];
	for(int i = 0; i < k; i++)
		cin >> l[i];
	for(int i = 0; i < k; i++)
		cin >> r[i];
	int q;
	cin >> q;
	while(q--){
		int x; 
		cin >> x;
		int high = k - 1;
		int low = 0;
		int mid;
		while(low <= high){
			mid = (high + low) / 2;
			if(l[mid] <= x && r[mid] >= x)
				break;
			else if(x < l[mid])
				high = mid - 1;
			else
				low = mid + 1;
		}
		//cout << "mid : " << mid << endl;
		int a = min(x, r[mid] + l[mid] - x) - 1;
		int b = max(x, r[mid] + l[mid] - x) - 1;
		//cout << "a : " << a << " " << "b : " << b << endl;
		subrev(s, a, b);
	}
	cout << s << endl;	
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
