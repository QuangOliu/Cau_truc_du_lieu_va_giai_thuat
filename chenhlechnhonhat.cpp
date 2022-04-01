#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define all(x) (x).begin(), (x).end()
#define endl '/n'

int main(){
	faster();
	int t = 1, n, k;
	while(t--){
		cin >> n >> k;
		vector<string> vs(k);
		for(string &i : vs)
			cin >> i;
		vi v;
		for(int i = 0;i < n; ++i)
			v.pb(i);
		vector<vi> vvi;
		vvi.pb(v);
		while(next_permutation(all(v)))
			vvi.pb(v);
		int ans = 1e9, MAX, MIN, num;
		for(vi &i : vvi){
			MAX = -1;
			MIN = 1e9;
			for(int j = 0; j < k; ++j){
				string s ="";
				for(int &z : i)
					s += vs[j][z];
				num = stoi(s);
				MAX = max(MAX, num);
				MIN = min(MIN, num);
			}
		ans = min(ans, MAX - MIN);
		}
		cout << ans << endl;
	}
	return 0;
}
