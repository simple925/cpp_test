/*
#include <iostream>
int main(void) {
	int i, j, temp = 0;
	// 0 이동가능 1 이동불가능 2 먹이
	// starting_point (2,2)

	// 개미가 먹이를 찾을 공간 받을 변수
	int area[10][10] = {};

	// 개미가 먹이를 찾을 공간 입력
	i = 0, j = 0;
	while (i < 10) {
		while (j < 10) {
			std::cin >> area[i][j];
			j++;
		}
		i++;
		j = 0;
	}
	// 개미가 먹이를 찾는 logic
	i = 1, j = 1;
	while (i < 9) {
		while (j < 10) {
			if (area[i][j] == 2) {
				temp = area[i][j];
				area[i][j] = 9;
				break;
			}
			// 막혔을때
			if (area[i][j]) {
				i += 1;
				j -= 1;
				continue;
			}
			// 안막혔을때
			else {
				area[i][j] = 9;
			}
			j++;
		}
		if (temp == 2 || i == 8) break;
		i++;
		j = 1;
	}
	// 찾은 후 결과값 출력
	i=0, j = 0;
	while (i < 10) {
		while (j < 10) {
			std::cout << area[i][j] << ' ';
			j++;
		}
		std::cout << "\n";
		i++;
		j = 0;
	}
}
*/