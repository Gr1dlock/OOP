#include <iostream>
#include "mathvector.h"
#include "exceptions.h"

using namespace MathVectorSpace;
int main()
{
	try
	{
		MathVector<int> obj1{1, 2, 3, 4, 5};
		std::cout << obj1;
		obj1 *= 3;
		std::cout << obj1;
		MathVector<int> obj2{5, 6, 7, 8, 9};
		MathVector<int> res = obj1 + obj2;
		std::cout << res;
		res /= 2;
		std::cout << res;
		double mod = res.module();
		res[5] = 1;
	}
	catch (BaseException &exception)
	{
		std::cout << exception.what();
	}
    return 0;
}