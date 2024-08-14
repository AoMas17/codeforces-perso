#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main(){ 
    int n, k;
	cin >> n >> k;
	vector<int> v(n);
	for(int i = 0; i < n; i++)
		cin >> v[i];
	int needed = v[k-1];
	for(int i = n - 1; i >= 0; i--){
		if(v[i] >= needed && v[i] != 0){
			cout << i + 1 << endl;
			return 0;
		}
	}
	cout << 0 << endl;
    return 0;
}
