#include <bits/stdc++.h>
using namespace std;
int a[1000];
int n;
string s;
void xuat () {
	for (int i = 1 ; i <= n ; i++) {
		cout << s[a[i]-1];
	}
	cout <<" ";
}


void sinh(int &ok) {
	int i = n -1 ;
	while (a[i] > a[i + 1]) i--;
	if(i == 0) ok = 0;
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
		cin >> s;
		n = s.size();
		next(ok);
		cout << endl; 
	}
}

