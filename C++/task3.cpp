#include <iostream>

int main() {
	int n;
	int min, max;
	std::cin >> n;
	
	int* data = new int[n];
	for(int i = 0; i < n; i++) {
		std::cin >> data[i];
	}
	
	min = data[0];
	max = data[0];
	for(int i = 0; i < n; i++) {
		if(data[i] > max) {
			max = data[i];
		}
		if(data[i] < min) {
			min = data[i];
		}
	}
	
	std::cout << min << std::endl;
	std::cout << max ;
	
	
	return 0;
}
