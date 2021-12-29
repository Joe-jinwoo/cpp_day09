#include<iostream>
#include<cstdio>
using namespace std;

int main() {
	int* p, n;
	cout << "몇명을 검사하겠습니까 : "; cin >> n;
	
	p = new int[n];

	printf("%d명의 점수를 입력하세요.\n", n);
	for (int i = 0; i < n; i++)
		cin >> *(p + i);
	for (int i = 0; i < n; i++)
		printf("%d번째 사람의 점수는 %d\n", i, *(p + i));
	

	delete[] p;


	return 0;
}