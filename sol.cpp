#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

bool cmp(const int &a, const int &b) {
	return b<a;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	cin >> n >> m;
	int a[n];
	for(int i=0; i<n; ++i)
		cin >> a[i];
	int cnt=0, sum=0;
	sort(a, a+n, cmp);
	for(int i=0; i<n; ++i) {
		if(sum>=m)
			break;
		sum+=a[i];
		cnt++;
	}
	cout << cnt << "\n";
}
