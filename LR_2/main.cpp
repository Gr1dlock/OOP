#include <iostream>
#include "mathvector_impl.h"
#include "exceptions.h"

using namespace MathVectorSpace;
int main()
{
	try
	{
        MathVector<double> obj1{1, 2, 3, 4, 5};
        std::cout << obj1;
        double ar[] = {1, 2};
        MathVector<double> obj2(2, ar);
        std::cout << obj2;
        MathVector<double> obj3(5, 1);
        std::cout << obj3;
        obj1 *= 3;
        MathVector<double> obj4{5, 6, 7, 8, 9};
        MathVector<double> res = obj1 + obj4;
		std::cout << res;
        res /= 2;
        std::cout << res;
        res[5] = 1;
	}
	catch (BaseException &exception)
	{
		std::cout << exception.what();
	}
    return 0;
}
