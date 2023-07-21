#include <iostream>

int main() {
	int m, n;
	
	std::cin >> m >> n;
	
	int m1[100][100];
	int m2[100][100];
	
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			std::cin >> m1[i][j];
		}
	}
	
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			std::cin >> m2[i][j];
		}
	}
	
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			std::cout << m1[i][j] + m2[i][j] << " ";
		}
		std::cout << std::endl;
	}
	
	return 0;
}
