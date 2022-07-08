#include <iostream>

typedef long long ll;

void solve() {
	ll t;
	std::cin >> t;
	while (true) {
		if (t == 1) {break;}
		if (t % 2 == 0) {t /= 2;std::cout << t << " ";}
		else {t = (t * 3) + 1; std::cout << t << " ";}
	}
	std::cout << "\n";
}

int main(int argc,char **argv) {
	solve();
	return 0;
}
