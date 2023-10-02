#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int solution() {
	std::string tmp;
	int x = 0, y = 0;
	int result = 0;
	int dx = 0, dy = 0, d = 0;
	for (int i = 0; i < 10; i++) {
		std::cin >> tmp;
		for (int j = 0; j < 10; j++) {
			if (tmp[j] == 'X') {
				x = j;
				y = i;
				dx = std::min(std::abs(x - 0), std::abs(x - 9));
				dy = std::min(std::abs(y - 0), std::abs(y - 9));
				d = std::min(dx, dy) + 1;
				result += d;
			}
		}
	}
	return result;
}

int main() {
	int n = 0;
	std::cin >> n;
	while (n--) {
		std::cout << solution() << '\n';
	}
}
