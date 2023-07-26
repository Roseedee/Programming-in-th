#include <iostream>

using namespace std;

int main() {
	int n[42] = {0};
	
	for(int i = 0; i < 10; i++) {
		int ntemp;
		cin >> ntemp;
		n[(int)ntemp % 42] = 1;
	}
	
	int ans = 0;
	for(int i = 0; i < 42; i++) {
		ans += n[i];
	}
	
	cout << ans;
	
	return 0;
}
