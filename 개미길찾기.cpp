/*
#include <iostream>
int main(void) {
	int i, j, temp = 0;
	// 0 �̵����� 1 �̵��Ұ��� 2 ����
	// starting_point (2,2)

	// ���̰� ���̸� ã�� ���� ���� ����
	int area[10][10] = {};

	// ���̰� ���̸� ã�� ���� �Է�
	i = 0, j = 0;
	while (i < 10) {
		while (j < 10) {
			std::cin >> area[i][j];
			j++;
		}
		i++;
		j = 0;
	}
	// ���̰� ���̸� ã�� logic
	i = 1, j = 1;
	while (i < 9) {
		while (j < 10) {
			if (area[i][j] == 2) {
				temp = area[i][j];
				area[i][j] = 9;
				break;
			}
			// ��������
			if (area[i][j]) {
				i += 1;
				j -= 1;
				continue;
			}
			// �ȸ�������
			else {
				area[i][j] = 9;
			}
			j++;
		}
		if (temp == 2 || i == 8) break;
		i++;
		j = 1;
	}
	// ã�� �� ����� ���
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