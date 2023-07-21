#include <iostream>
#include <string.h>

using namespace std;

int main() {
	char* c = new char[10000];
	
	cin >> c;
	int cl = strlen(c);
	
	bool letter[2] = {false, false};
	
	for(int i = 0; i < cl; i++) {
		int ctemp = (int)c[i];
		if(ctemp >= 65 and ctemp <= 90)
			letter[0] = true;
		else if(ctemp >= 97 and ctemp <= 122)
			letter[1] = true;
	}
	
	if(letter[0] and letter[1]) {
		cout << "Mix";	
	}else if(letter[0]){
		cout << "All Capital Letter";
	}else if(letter[1]) {
		cout << "All Small Letter";
	}
	
	return 0;
}
