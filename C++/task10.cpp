#include <iostream>
#include <cstring>

using namespace std;

void swap(bool &b1, bool &b2) {
	bool btemp = b1;
	b1 = b2;
	b2 = btemp;
}

int main() {
	const int l = 3;
	bool boll[l] = {true, false, false};
	char *c = new char[50];
	
	cin >> c;
	
	for(int i = 0; i < strlen(c); i++) {
//		cout << "round : " << i + 1 << endl;
		if(*(c + i) == 'A') {
			swap(boll[0], boll[1]);
		}else if(*(c + i) == 'B') {
			swap(boll[1], boll[2]);
		}else if(*(c + i) == 'C') {
			swap(boll[0], boll[2]);
		}
	}
	
	for(int i = 0; i < l; i++) {
		if(boll[i]) {
			cout << i + 1;
		}
	}

	return 0;
}
