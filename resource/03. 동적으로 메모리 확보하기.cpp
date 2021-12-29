#include<iostream>
using namespace std;


int main() {
	int* p;
	p = new int;

	cout << "동적으로 메모리를 확보했습니다.\n";
	*p = 50;
	cout << "동적으로 확보한 메모리를 사용하여 " << *p << "를 출력했습니다.\n";
	delete p;
	cout << "확보한 메모리를 해제했습니다.";



	return 0;
}