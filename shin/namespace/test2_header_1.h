#pragma once    // 컴파일러야 헤더 파일을 한 번만 빌드시켜라!
#include <iostream>
using namespace std;
namespace header1
{
	void function(void)
	{
		cout << "header1::function()" << endl;
	}
}
