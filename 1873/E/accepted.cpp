#include <iostream>
#include <string>
#include <vector>
#include <climits>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

long long level(vector<long long> v, long long h, long long n){
	long long res = 0;
	for(long long i = 0; i < n; i++){
		long long r = h - v[i];
		if (r > 0)
			res += r;
	}
	return res;
}

void Solve(){
	long long n; long long x; cin >> n; cin >> x;
	vector<long long> v(n);
	for(long long i = 0; i < n; i++){
		cin >> v[i];
	}
	long long high = INT_MAX; long long low = 0;
	long long h = 0;
	while(low < high){
		h = (high + low)/2;
		long long w = level(v, h, n);
		if(w > x)
			high = h;
		else
			low = h + 1;
	}
	long long test = level(v, h, n);
	if (test > x)
		h--;
	test = level(v, h+1, n);
	if (test < x)
		h++;
	cout << h << endl;
}

int main() {
    init; long long t; cin >> t;
    while(t--)
        Solve();
    return 0;
}
