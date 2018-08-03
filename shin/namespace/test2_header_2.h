#ifndef _NAMESPACE_H_			 	// 정의되어 있지 않다면
#define	_NAMESPACE_H_				// 정의하고
#include <iostream>
using namespace std;
namespace header2
{
	void function(void)
	{
		cout << "header2::function()" << endl;
	}
}
#endif											// 끝!

