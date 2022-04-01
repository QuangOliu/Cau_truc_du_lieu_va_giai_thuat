#include <bits/stdc++.h>
#include <string>
using namespace std;

struct data
{
	int leng;
	long at[25];
	
} typedef data;

data arr[300005];

int main() {
long n,k;
cin >>n>>k;
arr[0].leng = 0;
for (int i = 1; i<= 20;i++) 
	arr[0].at[i] = 0;
for (long i = 1; i<= n; i++) {
	string tmp;
	cin >>tmp;
	int len = tmp.length();
	arr[i].leng = len;
	for (int j = 2; j<=20; j++)	
		arr[i].at[j] = arr[i - 1].at[j];
	arr[i].at[len] ++;
}
long long pair = 0;
for (long i = 1; i<=n ;i++) {
	int len = arr[i].leng;
	if(i > k) {
		pair += (arr[i].at[len] - arr[i - k - 1].at[len] - 1);
	}
	else {
		pair += (arr[i].at[len] - arr[0].at[len] - 1);
	}
	
}
cout <<  pair;
return 0;
}
