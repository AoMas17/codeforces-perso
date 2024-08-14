#include <iostream>
#include <vector>
#include <climits>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
	unsigned long long n; cin >> n;
	vector<unsigned long long> l(n);
	vector<unsigned long long> c(n);
	for(unsigned long long i = 0; i < n; i++){
		cin >> l[i];
	}
	for(unsigned long long i = 0; i < n; i++){
		cin >> c[i];
	}
	unsigned long long suml = 0;
	unsigned long long sumc = 0;
	unsigned long long minl = INT_MAX;
	unsigned long long minc = INT_MAX;
	for(unsigned long long i = 0; i < n; i++){
		suml += l[i];
		sumc += c[i];
		minl = min(l[i], minl);
		minc = min(c[i], minc);
	}
	cout << min(minl * n + sumc, minc * n + suml) << endl;
	
}

int main(){ 
    init; unsigned long long t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
