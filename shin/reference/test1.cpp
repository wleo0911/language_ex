///*
//		레퍼런스 		
//*/
//
//#include <iostream>
//using namespace std;
//
//int changeValue1(int &p)	// 매개변수가 포인터의 주소값으로 받는 게 아니라 c++에서 새로 생긴 '레퍼런스' 
//{
//	p = 4;
//	return 0;
//}
//
//int changeValue2(int a)		// 매개변수 그대로 받아옴 
//{
//	a = 6;
//	return 0;
//}
//
//int main()
//{
//	int number = 3;
//	int &ref = number;		// number의 별명을 지어주겠다! (레퍼런스 = 참조자 = 별명)
//	int b = 5;		
//	int c = 0;
//
//	ref = b;		// number = b 와 같은 형 : 별명은 b다! 즉 b로 불러도 number가 돌아보겠지. 
//	ref = c;		// number의 별명 (ref)를 c라고 또 붙여준다. 
//							// 여기서도 c라 불러도 number가 돌아봄. 
//
//	cout << number << c << endl;
//	changeValue1(number);			// 포인터였다면 포인터의 주소값을 보냈을 테지만 변수 값을 보냄 
//	cout << number << c << endl;		// 그런데 call by reference로 작동!
//	changeValue2(number);			// 
//	cout << number << c << endl;		// 이건 제대로 call by value
//
//	return 0;
//}