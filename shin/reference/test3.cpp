/*
		���۷����� �����ϴ� �Լ�
*/

#include <iostream>
using namespace std;
												// �Ű����� : ���۷��� a,	���� : x 
int function1(int &a)		// int &a = x
{
	return a;		// a�� int������ ��ȯ
}

int& function2(int &a)		// x�� ����1 = &a 
{
	return a;								// ������ a�� �ٽ� int&������ ��ȯ�Ѵ�?? 							
}

int main()
{
	int x = 1;
	//cout << function1(x)++ << endl;		// function1(x)++ �� �Ұ���.
	cout << function2(x)++ << endl;			// �ݸ� function2�� ��ȯ ���������� int& 
	cout << "x :: " << x << endl;

	return 0;
}

