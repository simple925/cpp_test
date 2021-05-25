/*#include<iostream>
using namespace std;
int main(void) {
	// l 길이 d 방향(0가로, 1세로), 좌표xy
	int stick_h, stick_w, stick_n, x, y, l, d;
	cin >> stick_w >> stick_h;
	// 나무막대를 놓을 판
	int** stick_board = new int* [stick_w];
	for (int i = 0; i < stick_w; i++) { stick_board[i] = new int[stick_h]; }
	
	for (int i = 0; i < stick_w; i++) {
		for (int j = 0; j < stick_h; j++) {
			stick_board[i][j] = 0;
		}
	}
	// 판에 놓인 막대 개수 입력 받음
	cin >> stick_n;
	// 판에 놓인 막대 위치 입력 받음
	for (int i = 0; i < stick_n; i++) {
		cin >> l >> d >> x >> y;
		if (!d) {
			// 가로
			for (int j = 0; j < l; j++) {
				stick_board[x-1][y-1+j] = 1;
			}
		}
		else {
			// 세로
			for (int j = 0; j < l; j++) {
				stick_board[x-1+j][y - 1] = 1;
			}
		}
	}
	for (int i = 0; i < stick_w; i++) {
		for (int j = 0; j < stick_h; j++) {
			cout << stick_board[i][j] << " ";
		}
		cout << "\n";
	}
	for (int i = 0; i < stick_w; i++) { delete[] stick_board[i]; } delete[] stick_board;
}
*/