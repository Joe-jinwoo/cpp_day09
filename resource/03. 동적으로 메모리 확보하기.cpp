#include<iostream>
using namespace std;


int main() {
	int* p;
	p = new int;

	cout << "�������� �޸𸮸� Ȯ���߽��ϴ�.\n";
	*p = 50;
	cout << "�������� Ȯ���� �޸𸮸� ����Ͽ� " << *p << "�� ����߽��ϴ�.\n";
	delete p;
	cout << "Ȯ���� �޸𸮸� �����߽��ϴ�.";



	return 0;
}