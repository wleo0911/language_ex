///*
//		���۷��� 		
//*/
//
//#include <iostream>
//using namespace std;
//
//int changeValue1(int &p)	// �Ű������� �������� �ּҰ����� �޴� �� �ƴ϶� c++���� ���� ���� '���۷���' 
//{
//	p = 4;
//	return 0;
//}
//
//int changeValue2(int a)		// �Ű����� �״�� �޾ƿ� 
//{
//	a = 6;
//	return 0;
//}
//
//int main()
//{
//	int number = 3;
//	int &ref = number;		// number�� ������ �����ְڴ�! (���۷��� = ������ = ����)
//	int b = 5;		
//	int c = 0;
//
//	ref = b;		// number = b �� ���� �� : ������ b��! �� b�� �ҷ��� number�� ���ƺ�����. 
//	ref = c;		// number�� ���� (ref)�� c��� �� �ٿ��ش�. 
//							// ���⼭�� c�� �ҷ��� number�� ���ƺ�. 
//
//	cout << number << c << endl;
//	changeValue1(number);			// �����Ϳ��ٸ� �������� �ּҰ��� ������ ������ ���� ���� ���� 
//	cout << number << c << endl;		// �׷��� call by reference�� �۵�!
//	changeValue2(number);			// 
//	cout << number << c << endl;		// �̰� ����� call by value
//
//	return 0;
//}