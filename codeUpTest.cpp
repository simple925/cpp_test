#include<iostream>
#include<string>
using namespace std;
int main(void) {
    int result = 0, sum = 0;
    string s = "";
    cin >> s;
    string::iterator iter = s.begin();
    for (;iter != s.end(); iter++) {
        // ���� 'H'�� ���� ��� ���� ����
        if (*iter == 72) {
            sum = result * 12;
            result = 0;
        }
        // ���ڿ����� ���ڸ� ��� �߰�
        if (*iter >= 48 && *iter <= 57) {
            result = (result * 10) + (*iter - 48);
        }
    }
    sum += result;
    cout << sum;
    return 0;
}
/*
    c++ string���� iterator�� ��� �� �� ����
    �̰� ���ؼ� �ݺ��� �Ҽ� ���� �ش� ������ ������ ���� �о����
    �ش� ��ġ�� �ִ� ���� ������ ����� �� ����
*/