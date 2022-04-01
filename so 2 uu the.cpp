#include <bits/stdc++.h>
using namespace std;
int n,k, a[1000];
vector <string> v;
void in() {
	int dem = 0;
	for (int i = 1; i <= n; i++) {
		if(a[i] == 2) dem++;
	}
	if(dem > k - dem && a[1] != 0) {
		string tmp = "";
		for (int i = 1; i <= k ; i++) {
			tmp += to_string(a[i]);
		}
		v.push_back(tmp);
	}
}
void Try (int i ) {
	for (int j = 0; j <= 2;j ++) {
		a[i] = j;
		if(i==k) in();
		else Try(i+1);
		}
}

int main () {
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 1; i <= 10; i++) {
			k = i;
			Try(1);
		}
		for (int i = 0; i < n ;i++) {
			cout << v[i] << " ";
		}
		cout << endl;
	}
}
