#include <iostream>

using namespace std;

void swap(int &n1, int &n2) {
	int ntemp = n1;
	n1 = n2;
	n2 = ntemp;
	
}

int main() {
	const int l = 3;
	int n[l];
	char c[l];
	
	cin >> n[0] >> n[1] >> n[2];
	cin >> c[0] >> c[1] >> c[2];
	
	//linear sort
	for(int i = 0; i < l; i++) {
		for(int j = 0; j < l; j++){
			if(n[i] < n[j]) {
				swap(n[i], n[j]);
			}
		}
	}
	
	//A < B < C
	for(int i = 0; i < l; i++) {
		if(c[i] == 'A') {
			cout << n[0] << " ";
		}else if(c[i] == 'B') {
			cout << n[1] << " ";
		}else if(c[i] == 'C') {
			cout << n[2] << " ";
 		}
	}
	
	return 0;
}
