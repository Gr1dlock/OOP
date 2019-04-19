//
// Created by Dmitriy Lugovoy on 2019-04-18.
//

#ifndef LR_2_VECTORITERATOR_H
#define LR_2_VECTORITERATOR_H

#include "baseiterator.h"

namespace MathVectorSpace
{
	template <typename T>
	class VectorIterator: public BaseIterator<T>
	{

	public:
		VectorIterator(const VectorIterator<T> &iterator);
		VectorIterator(T *p);

		T &operator * ();
		const T &operator * () const;

		T *operator -> ();
		const T *operator -> () const;
	};
}

#include "vectoriterator_impl.h"

#endif //LR_2_VECTORITERATOR_H
