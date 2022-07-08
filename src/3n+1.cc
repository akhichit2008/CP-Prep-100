// @ BEGIN source_code
#include <algorithm>
#include <cstdio>

using namespace std;

void computeCycle(int i,int j) {
	int temp_i = i;
	int temp_j = j;
	if (i > j) swap(i,j);
	int max_cycle_len = 0;
	int cycle_len;
	while (i<=j) {
		unsigned int n = i;
		cycle_len = 1;
		while (n != 1) {
			if (n % 2 == 0) n /= 2;
			else n = (n * 3) + 1;
			cycle_len++;
		}
		if (cycle_len > max_cycle_len) max_cycle_len = cycle_len;
		i++;
	}
	printf("%d %d %d\n",temp_i,temp_j,max_cycle_len);
	
}

void solve() {
	int t;
	scanf("%d",&t);
	while (t--) {
	   long long i,j;
	   scanf("%d %d",&i,&j);
  	   computeCycle(i,j);	   
	}
}

int main( void ) {
	solve();
	return 0;
}

// @ END source_code
