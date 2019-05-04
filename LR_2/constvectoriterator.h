//
// Created by Dmitriy Lugovoy on 2019-04-19.
//

#ifndef LR_2_CONSTVECTORITERATOR_H
#define LR_2_CONSTVECTORITERATOR_H

#include "baseiterator_impl.h"

namespace MathVectorSpace
{
	template<typename T>
	class ConstVectorIterator: public BaseIterator<T>
	{
	public:
		ConstVectorIterator(const ConstVectorIterator<T>& iterator);
		ConstVectorIterator(std::shared_ptr<T> p);

		const T &operator *() const;
		const T *operator ->() const;
	};
}


#endif //LR_2_CONSTVECTORITERATOR_H
