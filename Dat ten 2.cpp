#include <bits/stdc++.h>
using namespace std;
int a[1000];
char b[40];
int n,k;

void xuat () {
	for (int i = 1 ; i <= k ; i++) {
		cout <<(char) (a[i] + 64);
	}
	cout << endlx;
}


void sinh(int &ok) {
	int i = k;
	while ( i > 0 && a[i] == n-k+i) i--;
	a[i]++;
	if (i > 0) {
		for(int j = i + 1; j <= n; j++) {
			a[j] = a[j-1] + 1;
		}
	}
	else ok = 0;
}

void next(int ok) {
	for (int i = 1 ; i <= n ; i++) {
		a[i] = i;
	}
	while (ok) {
		xuat();
		sinh( ok );
	}
}
int main () {
	int t;
	cin >>t;
	while (t--) {
		int ok = 1;
		cin >> n >> k;
		next(ok);
		cout << endl; 
	}
}
