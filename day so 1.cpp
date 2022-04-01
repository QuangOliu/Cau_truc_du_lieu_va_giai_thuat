#include <bits/stdc++.h>
using namespace std;

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
		cout << "[";
		for (int i = 0; i< n - 1;i++) {
			cout << a[i] << " ";
		}
		cout << a[n - 1] << "]" << endl;
		for (int i = 0; i < n - 1; i++) {
			cout << "[";
			for(int j = 0 ; j < n - i - 1; j++) {
				cout << a[j] + a[j + 1];
				a[j] += a[j+1];
				if(j<n-i-2)cout<<" ";
			}
			cout <<"]" <<endl;
			
		}
	}
}
