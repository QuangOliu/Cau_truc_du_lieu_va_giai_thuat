#include <bits/stdc++.h>
using namespace std;

void in(int n, int * a) {
	cout << "[";
	for (int i=0; i< n -1;i++) {
		cout << a[i] << " ";
	}
	cout << a[n - 1] << "]" << endl;
}

void Try(int n, int *a) {
	if(n==0) return;
	in(n, a);
	for (int i = 0; i < n ; i++) {
		a[i] += a[i+1];
	}
	Try(n - 1, a);
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n; 
		cin >> n;
		int a[n];
		for (auto &i : a) {
			cin >> i;
		}
		Try(n,a);
	}
}
