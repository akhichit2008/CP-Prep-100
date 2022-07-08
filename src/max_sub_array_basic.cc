#include <iostream>

using namespace std;

int compute_max(int n,int a[]) {
	int best = 0;
	for (int i =0;i<=n;i++) {
		for (int j = i;j<n;j++) {
			int sum = 0;
			for (int k = i; k<= j;k++) sum += a[i];
			best = max(best,sum);	
		}
	}
	return best;
}

void solve() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i<= n;i++) cin >> a[i];
	cout << compute_max(n,a) << "\n";	
}

int main(int argc, char const *argv[])
{
	solve();
	return 0;
}