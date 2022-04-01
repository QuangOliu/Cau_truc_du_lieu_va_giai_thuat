#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define fi first
#define se second
#define ll long long
int main () {
//	faster();
	int t = 1, n;
	cin >>t;
	while (t--) {
		cin >> n;
		vector<pair<ll,ll>> vp(n);
		for(pair<ll, ll> &i: vp) {
			cin >>i.fi >>i.se;
		}
		ll dp[n][2];
		dp[0][0] =0;
		for(int i = 1; i < n;i++) {
			if(vp[i].fi == vp[i -1].fi) {
					dp[i][1] = min(dp[i-0][0], dp[i - 1][1] ) + vp[i].se;
					dp[i][0] = dp[i - 1][1];
			}
			else {
				dp[i][0] = min ( dp [i -1][0], dp [i - 1][1]);
				dp[i][1] = min (dp[i - 1][0], dp[i -1][1]) +vp[i].se;
			}
		}
		cout << min(dp[n-1][0], dp[n - 1][1]) << endl;
	}
}
///hello
