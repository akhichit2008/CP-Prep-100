#include <iostream>

using namespace std;

void bit_mask_repr(int x,int k) {
	cout << "Bit representation of " << x << ": ";
	for (int i = k; i>=0;i--) {
		if (x&(1<<i)) cout << "1";
		else cout << "0";
	}
	cout << "\n";
}

void compute_cls(int x) {
	int r = __builtin_clz(x);
	cout <<"Number of zeroes in the beginning: " << r << "\n";
}

void compute_ctz(int x) {
	int r = __builtin_ctz(x);
	cout <<"Number of zeroes at the end: " << r << "\n";
}


void compute_popcount(int x) {
	int r = __builtin_popcount(x);
	cout << "Number of 1 in bit representation: " << r << "\n";
}

void compute_parity(int x) {
	int r = __builtin_parity(x);
	cout << "Parity of number of ones in bit representation: " << r << "\n";
}

int main(int argc, char const *argv[])
{
	int x,k;
	cin >> x >> k;
	bit_mask_repr(x,k);
	compute_cls(x);
	compute_ctz(x);
	compute_popcount(x);
	compute_parity(x);
	return 0;
}