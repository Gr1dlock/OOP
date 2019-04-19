//
// Created by Dmitriy Lugovoy on 2019-04-19.
//

#ifndef LR_2_CONSTVECTORITERATOR_IMPL_H
#define LR_2_CONSTVECTORITERATOR_IMPL_H

#include "constvectoriterator.h"

namespace MathVectorSpace
{
	template<typename T>
	ConstVectorIterator<T>::ConstVectorIterator(const ConstVectorIterator<T> &iterator):
		BaseIterator<T> (iterator.ptr) {}

	template<typename T>
	ConstVectorIterator<T>::ConstVectorIterator(T *p) : BaseIterator<T> (p) {}

	template<typename T>
	const T &ConstVectorIterator<T>::operator * () const
	{
		return *(this->ptr);
	}

	template<typename T>
	const T *ConstVectorIterator<T>::operator -> () const
	{
		return this->ptr;
	}
}
#endif //LR_2_CONSTVECTORITERATOR_IMPL_H
