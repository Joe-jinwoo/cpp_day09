#include<iostream>
#include"MyFunc.h"
using namespace std;

int main() {
	int n1, n2;
	cout << "ù��° ������ �Է��Ͻʽÿ�/\n";
	cin >> n1;

	cout << "�ι�° ������ �Է��Ͻʽÿ�.\n";
	cin >> n2;

	int ans = max(n1, n2);

	cout << "�ִ��� " << ans << "�Դϴ�.\n";


	return 0;
}
