//
// Created by Dmitriy Lugovoy on 2019-04-18.
//

#ifndef LR_2_BASEITERATOR_H
#define LR_2_BASEITERATOR_H

#include "mathvectorspace.h"

namespace MathVectorSpace
{
	template <typename T>
	class BaseIterator
	{
	public:

		BaseIterator(const BaseIterator<T>& iterator);

		BaseIterator<T> &operator = (const BaseIterator<T> &iterator);

		BaseIterator<T> &operator ++ ();
		BaseIterator<T> &operator -- ();

		const BaseIterator<T> operator ++ (int);
		const BaseIterator<T> operator -- (int);

		bool operator ==(const BaseIterator<T> &iterator);
		bool operator !=(const BaseIterator<T> &iterator);

		virtual ~BaseIterator();

	protected:
		T *ptr;
		explicit BaseIterator(T *p) : ptr(p) {};
	};

}

#include "baseiterator_impl.h"

#endif //LR_2_BASEITERATOR_H
