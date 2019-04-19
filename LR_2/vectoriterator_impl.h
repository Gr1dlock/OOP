//
// Created by Dmitriy Lugovoy on 2019-04-19.
//

#ifndef LR_2_VECTORITERATOR_IMPL_H
#define LR_2_VECTORITERATOR_IMPL_H

#include "vectoriterator.h"

namespace MathVectorSpace
{
	template<typename T>
	VectorIterator<T>::VectorIterator(const VectorIterator<T> &iterator): BaseIterator<T>(iterator.ptr) {}

	template<typename T>
	VectorIterator<T>::VectorIterator(T *p): BaseIterator<T>(p) {}

	template<typename T>
	T &VectorIterator<T>::operator * ()
	{
		return *(this->ptr);
	}

	template<typename T>
	const T &VectorIterator<T>::operator * () const
	{
		return *(this->ptr);
	}

	template<typename T>
	T *VectorIterator<T>::operator -> ()
	{
		return this->ptr;
	}

	template<typename T>
	const T *VectorIterator<T>::operator -> () const
	{
		return this->ptr;
	}
}

#endif //LR_2_VECTORITERATOR_IMPL_H
