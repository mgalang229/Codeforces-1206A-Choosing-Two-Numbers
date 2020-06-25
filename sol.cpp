#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n, m, a[1000], b[1000];

void decode() {
	int mx = 0, mx2 = 0;
	cin >> n;
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
		mx = max(mx, a[i]);
	}
	cin >> m;
	for(int i = 0; i < m; ++i) {
		cin >> b[i];
		mx2 = max(mx2, b[i]);
	}
	cout << mx << " " << mx2 << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	decode();
	return 0;
}
