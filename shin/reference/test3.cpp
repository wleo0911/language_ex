/*
		레퍼런스를 리턴하는 함수
*/

#include <iostream>
using namespace std;
												// 매개변수 : 레퍼런스 a,	인자 : x 
int function1(int &a)		// int &a = x
{
	return a;		// a는 int형으로 반환
}

int& function2(int &a)		// x의 별명1 = &a 
{
	return a;								// 별명인 a를 다시 int&형으로 반환한다?? 							
}

int main()
{
	int x = 1;
	//cout << function1(x)++ << endl;		// function1(x)++ 는 불가능.
	cout << function2(x)++ << endl;			// 반면 function2는 반환 데이터형이 int& 
	cout << "x :: " << x << endl;

	return 0;
}

