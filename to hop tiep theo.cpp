#include <bits/stdc++.h>
using namespace std;
int n,k, cuoi;
int a[1000], b[50];
void in(int n) {
	int x = k;
	for (int i = 1; i <= n;i++) {
		if ( b[i] == 2 ) x--;
//		cout << i<< ": "<<b[i] << endl;
	}
	if ( cuoi ) {
		cout << k;
	}
	else cout << x;
	cout <<endl;
//	cout <<k<<endl;
}

void Solve() {
	int i = k;
	while(a[i] == n - k + i) i--;
	if(i == 0) {
		cuoi = 1;
	}
	else {
		a[i] ++;
		for (int j = i + 1; j <= k; j++) {
			a[j] = a[j-1] + 1;
		}
	}
	for (int x = 1; x <= n; x++) {
		b[a[x]] ++;
	}
}

int main () {
	int t;
	cin >>t;
	while (t--) {
		cuoi = 0;
		cin >> n >> k;
		for (int i = 1; i <= k; i++){
			cin >> a[i];
			b[a[i]]++;
		}
		Solve();
		in(n);
		for (int i = 1; i <= n ; i++) b[i] =0;
	}
}


