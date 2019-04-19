//
// Created by Dmitriy Lugovoy on 2019-04-19.
//

#ifndef LR_2_CONSTVECTORITERATOR_H
#define LR_2_CONSTVECTORITERATOR_H

#include "baseiterator.h"

namespace MathVectorSpace
{
	template<typename T>
	class ConstVectorIterator: public BaseIterator<T>
	{
	public:
		ConstVectorIterator(const ConstVectorIterator<T>& iterator);
		ConstVectorIterator(T *p);

		const T &operator *() const;
		const T *operator ->() const;
	};
}

#endif //LR_2_CONSTVECTORITERATOR_H
