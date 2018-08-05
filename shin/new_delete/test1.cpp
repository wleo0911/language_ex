/*
	new와 delete의 사용
*/

#include <iostream>
using namespace std;

int main()
{
	int* p = new int;

	*p = 10;

	cout << *p << endl;
	delete p;

	return;
}