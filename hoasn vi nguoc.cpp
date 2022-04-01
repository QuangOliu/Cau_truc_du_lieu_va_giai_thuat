#include <bits/stdc++.h>
using namespace std;
int n,ok;
int a[1000];
void init() {
	for(int i = 1; i <= n; i++) a[i] = i;
}
void sinh () {
	int i = n-1;
	while ( a[i] > a[i+1] ) i--;
	if(i== 0) ok = 0;
	else {
		int k = n;
		while(a[k] < a[i]) k--;
		swap( a[k], a[i]);
		int l = i + 1, r = n;
		while (l > r) {
			swap(a[l], a[r]);
			l++; r--;
		}
	}
	
}
int main () {
	int t;
	cin>> t;
	while(t--) {
		cin>>n;
		vector <string> v;
		 ok = 1;
		init();
		while ( ok) {
			string res = "";
			for (int i = 1; i <= n; i++) {
				res += to_string(a[i])+ "";
			}
//				cout << res << endl;
			v.push_back(res);
			sinh();
		}
		reverse(v.begin(), v.end());
		for (int i = 0; i < v.size();i++) {
			cout << v[i] << " ";
		}
		cout <<endl;
	}
}
