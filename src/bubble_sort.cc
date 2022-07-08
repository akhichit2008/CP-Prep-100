// Bubble Sort algorithm implementation
// to sort a list of numbers in increasing order

#include <iostream>
#include <utility>

using namespace std;

void display_array(int n,int a[]) {
	cout << "Sorted Array : " << '\n';
	for (int i = 0; i<=n;i++) cout << a[i] << " ";
		cout << "\n";
}

void bubble_sort(int n,int a[]) {
	for (int i =0;i<=n-i;++i) {
		for (int j = 0; j<=n-i;++j) {
			if (a[j] > a[j+1]) {
				swap(a[j],a[j+1]);
			}
		}
	}

}

void solve() {
	int a[] = {1,30,-20};
	int n = sizeof(a)/sizeof(a[0]);
	bubble_sort(n,a);
	display_array(n,a);	
}

int main(int argc, char const *argv[])
{
	solve();
	return 0;
}
