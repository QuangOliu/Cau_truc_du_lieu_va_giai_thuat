#include<bits/stdc++.h>

using namespace std;

int n,a[20],b[20],kt=0,dem=1;

void in(){
	int x = 0;

	for(int i = 1 ; i <= n ; i++){
		if(a[i] != b[i]) {x = 1;break;}
	}
	if(x == 0) cout<<dem<<endl;
	
}
 
void sinh(){
	int i,j;
	i = n - 1;
	while(a[i] > a[i+1] ) i--;
	if(i == 0) kt = 1;
	else{
		j = n;
		while(a[j] < a[i]) j--;
		swap(a[i], a[j]);
		int k = i + 1, l = n;
		while(k < l){
			swap(a[k],a[l]);
			k++;
			l--;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i = 1 ; i <= n ; i++) cin >> b[i];
		for(int i = 1 ; i <= n ; i++) a[i] = i;
		while(kt != 1){
			in();
			sinh();
			dem++;
		}
        kt=0;
		dem = 1;
	}
}
