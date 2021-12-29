#include<iostream>
#include"MyFunc.h"
using namespace std;

int main() {
	int n1, n2;
	cout << "첫번째 정수를 입력하십시오/\n";
	cin >> n1;

	cout << "두번째 정수를 입력하십시오.\n";
	cin >> n2;

	int ans = max(n1, n2);

	cout << "최댓값은 " << ans << "입니다.\n";


	return 0;
}
