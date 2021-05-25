#include<iostream>
#include<string>
using namespace std;
int main(void) {
    int result = 0, sum = 0;
    string s = "";
    cin >> s;
    string::iterator iter = s.begin();
    for (;iter != s.end(); iter++) {
        // 문자 'H'가 나올 경우 값을 저장
        if (*iter == 72) {
            sum = result * 12;
            result = 0;
        }
        // 문자열에서 숫자만 골라서 추가
        if (*iter >= 48 && *iter <= 57) {
            result = (result * 10) + (*iter - 48);
        }
    }
    sum += result;
    cout << sum;
    return 0;
}
/*
    c++ string에서 iterator를 얻어 올 수 있음
    이걸 통해서 반복을 할수 있음 해당 변수의 포인터 값을 읽어오면
    해당 위치에 있는 값을 가져다 사용할 수 있음
*/