#include <bits/stdc++.h>
using namespace std;
int a[1000], b[1000];
int n, dem,kt, cuoi;

void in() {
	int x = 1;
	for (int i = 1; i<= n ;i ++) {
		if ( a[i] != b[i] ) {
			x = 0;
			break;
		}
	}
	if ( x == 1 ) {
		cout << dem<< endl;
	}
}


void sinh() {
	int i = n -1 ;
	while (a[i] > a[i + 1]) i--;
	if(i == 0) kt = 1;
	else{
		int k = n;
		while ( a[k] < a[i]) k--;
		swap ( a[k], a[i]);
		int l = i + 1, r = n;
		while ( l < r) {
			swap( a[l], a[r]);
			l++,r--;
		}
	}
}

int main () {
	int t;
	cin >>t;
	while (t--) {
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++) {
			cin >> b[i];
			a[i] = i;	
		}
		kt = 0;
		dem = 1;
		while (kt != 1) {
			in();
			sinh();
			dem ++;
		}
	}
}

