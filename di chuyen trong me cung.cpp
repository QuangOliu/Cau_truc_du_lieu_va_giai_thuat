#include <bits/stdc++.h>
using namespace std;
int n, a[100][100];
vector <string> res;
bool check = false;

void init() {
	cin >> n;
	for(int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
		}
	}
	res.clear(); 
	check = false;
} 


void Try(int i,int j, string s) {
	if ( !a[1][1] || !a[n][n]) {
		return;
	}
	if (i == n && j == n && a[n][n]) {
		res.push_back(s);
		check = true;
		return;
	}
	
	if(a[i][j+1] && j < n) {
		Try(i, j+ 1, s + "R");
	} 
	if (a[i+1][j] && i< n) {
		Try(i+1, j, s+ "D");
	}
	if( (i < n && j < n && !a[i+1][j] && a[i][j+1] ) || ( i>n || j > n) ){
		return;
	}
}

int main() {
	int t;
	cin >> t;
	while (t--) { 
		init();
		Try(1,1,"");
		if (check) {
			sort(res.begin(), res.end());
			for(auto x : res) cout << x <<" ";
			
		}
		else cout <<"-1";
		cout << endl;
	}
}
