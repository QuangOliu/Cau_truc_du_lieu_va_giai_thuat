#include<bits/stdc++.h>

using namespace std;

int n,k,a[20],b[20],ok,dem=1;

void in(){
	int x = 0;

	for(int i = 1 ; i <= k ; i++){
		if(a[i] != b[i]) {x = 1;break;}
	}
	if(x == 0) cout<<dem<<endl;
	
}
 
void sinh(){
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
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i = 1 ; i <= k ; i++) cin >> b[i];
		for(int i = 1 ; i <= k ; i++) a[i] = i;
		ok = 1;
		while(ok){
			in();
			sinh();
			dem++;
		}
        ok=1;
		dem = 1;
	}
}
