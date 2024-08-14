#include <iostream>
#include <vector>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
    int n; cin >> n;
    vector<int> list;
    while (n--){
	int tmp;
	cin >> tmp;
	list.push_back(tmp);
    }
    n = list.size();
    int max = list[0];
    int i_max = 0, j_max = 0;
    for (int i = 0; i < n; i++){
	    for (int j = i; j < n; j++){
		    int mult = 1;
		    for (int k = i; k <= j; k++)
			    mult *= list[k];
		    int sum = mult;
		    for (int k1 = 0; k1 < i; k1++)
			    sum += list[k1];
		    for (int k2 = j + 1; k2 < n; k2++)
			    sum += list[k2];
		    if (sum > max){
			    max = sum;
			    i_max = i;
			    j_max = j;
		    }
	    }
    }
    cout << i_max + 1 << " " << j_max + 1 << "\n";
}

int main() { 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
