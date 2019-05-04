//
// Created by Dmitriy Lugovoy on 2019-04-18.
//

#ifndef LR_2_VECTORITERATOR_H
#define LR_2_VECTORITERATOR_H

#include "baseiterator_impl.h"

namespace MathVectorSpace
{
	template <typename T>
	class VectorIterator: public BaseIterator<T>
	{

	public:
		VectorIterator(const VectorIterator<T> &iterator);
		VectorIterator(std::shared_ptr<T> p);

        std::shared_ptr<T> operator * ();
		const T &operator * () const;

        std::shared_ptr<T>  operator -> ();
		const T *operator -> () const;
	};
}


#endif //LR_2_VECTORITERATOR_H
