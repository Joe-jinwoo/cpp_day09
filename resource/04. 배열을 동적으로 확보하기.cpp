#include<iostream>
#include<cstdio>
using namespace std;

int main() {
	int* p, n;
	cout << "����� �˻��ϰڽ��ϱ� : "; cin >> n;
	
	p = new int[n];

	printf("%d���� ������ �Է��ϼ���.\n", n);
	for (int i = 0; i < n; i++)
		cin >> *(p + i);
	for (int i = 0; i < n; i++)
		printf("%d��° ����� ������ %d\n", i, *(p + i));
	

	delete[] p;


	return 0;
}