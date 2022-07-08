#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

void displayPermutations(int a[],int n) {
	for (int i = 0; i<=n;i++) {
		cout << a[i] << " ";
	}
	cout << "\n";
}

void solve(unsigned int n,int a[]) {
	sort(a,a+n);
	cout << "All possible permutations : " << "\n";
	do {
		displayPermutations(a,n);
	} while (next_permutation(a,a+n));
}

int main(int argc, char const *argv[])
{
	unsigned int n;
	cout << "Size of array : ";
	cin >> n;
	int a[n] = {};
	cout << "Enter elements of set or array : ";
	for (unsigned int i = 0 ; i < n; i++) {
		cin >> a[i];
		cout << a[i] << "\n";
	} 
	solve(n,a);
	return 0;
}