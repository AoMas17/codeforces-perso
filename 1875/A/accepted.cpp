#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
    unsigned long long a, b, n;
	cin >> a >> b >> n;
	vector<unsigned long long> v(n);
	for(unsigned long long i = 0; i < n; i++){
		cin >> v[i];
	}
	unsigned long long i = 0;
	unsigned long long sum = b;
	while(i < n){
		if(v[i] >= a)
			sum += a - 1;
		else
			sum += v[i];
		i++;
	}	
	cout << sum << endl;
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
