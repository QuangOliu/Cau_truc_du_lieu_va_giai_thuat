#include <bits/stdc++.h>
using namespace std;

int n, a[20], ok;

void in() {
	for(int i = 1 ;i <= n; i++) {
		int dem = 0;
		if ( a[i] == 0) {
			cout <<"A";
		}
		else {
			cout << "B";
			dem ++;
		}
	}
	if ( dem != n) {
	cout << ",";
	}
}

void Try(int i) {
	for (int j = 0; j <= 1; j++ ) {
		a[i] = j;
		if (i == n) in();
		else {
			Try(i+1);
		}
	}
}

int main () {
	int t;
	cin >>t;
	while (t--) {
		cin >> n;
		Try(1);
		cout << endl;
		}
}
