///*
//	배열의 레퍼런스
//*/
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int arr[3] = { 1, 2, 3 };
//	int(&ref)[3] = arr;		// arr의 별명을 지어주겠다. 이때 배열의 레퍼런스는 배열과 크기가 같아야 한다. 
//												// 포인터는 *p 하나로 모든 1차원 배열을 볼 수도 있으니 배열을 참조할 때는 이왕이면 포인터로
//	ref[0] = 3;
//	ref[1] = 2;
//	ref[2] = 1;
//
//	cout << arr[0] << endl;
//}