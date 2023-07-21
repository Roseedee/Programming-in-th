#include <iostream>

int main() {
	short a, b, c;
	std::cin >> a >> b >> c;
	short ss = a + b + c;
	if(ss >= 0 and ss < 50) {
		std::cout << "F";
	}else if(ss >= 50 and ss < 55) {
		std::cout << "D";
	}else if(ss >= 55 and ss < 60) {
		std::cout << "D+";
	}else if(ss >= 60 and ss < 65) {
		std::cout << "C";
	}else if(ss >= 65 and ss < 70) {
		std::cout << "C+";
	}else if(ss >= 70 and ss < 75) {
		std::cout << "B";
	}else if(ss >= 75 and ss < 80) {
		std::cout << "B+";
	}else if(ss >= 80 and ss <= 100) {
		std::cout << "A";
	}
	return 0;
}
