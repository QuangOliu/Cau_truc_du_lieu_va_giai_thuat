#include <bits/stdc++.h>
using namespace std;
int a[1000];
vector <int> v;
int n,k;

void xuat () {
	for (int i = 1 ; i <= k ; i++) {
		cout << v[a[i] - 1] <<" ";
	}
	cout <<endl;
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
	for (int i = 1 ; i <=  n; i++) {
		a[i] = i;
	}
	while (ok) {
		xuat();
		sinh( ok );
	}
}
int main () {
//	int t;
//	cin >>t;
//	while (t--) {
		int m;
		int ok = 1;
		cin >> m >> k;
		set <int> b;
		for (int i = 1; i <= m; i++) {
			int x;
			cin >> x;
			b.insert(x);
		}
		for(auto i : b) {
			v.push_back(i);
		}
		n = v.size();
		next(ok);
		cout << endl; 
//	}
}

