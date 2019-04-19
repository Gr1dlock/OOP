//
// Created by Dmitriy Lugovoy on 2019-04-18.
//

#ifndef LR_2_BASEITERATOR_IMPL_H
#define LR_2_BASEITERATOR_IMPL_H

#include "baseiterator.h"

namespace MathVectorSpace
{
	template<typename T>
	BaseIterator<T>::BaseIterator(const BaseIterator<T> &iterator)
	{
		ptr = iterator.ptr;
	}

	template<typename T>
	BaseIterator<T> &BaseIterator<T>::operator = (const BaseIterator<T> &iterator)
	{
		ptr = iterator.ptr;
		return *this;
	}

	template<typename T>
	BaseIterator<T> &BaseIterator<T>::operator ++ ()
	{
		++ptr;
		return *this;
	}

	template<typename T>
	BaseIterator<T> &BaseIterator<T>::operator -- ()
	{
		--ptr;
		return *this;
	}

	template<typename T>
	const BaseIterator<T> BaseIterator<T>::operator ++ (int)
	{
		BaseIterator tmp(*this);
		++ptr;
		return tmp;
	}

	template<typename T>
	const BaseIterator<T> BaseIterator<T>::operator -- (int)
	{
		BaseIterator tmp(*this);
		--ptr;
		return tmp;
	}

	template<typename T>
	bool BaseIterator<T>::operator == (const BaseIterator<T> &iterator)
	{
		return (ptr == iterator.ptr);
	}

	template<typename T>
	bool BaseIterator<T>::operator != (const BaseIterator<T> &iterator)
	{
		return (ptr != iterator.ptr);
	}

	template<typename T>
	BaseIterator<T>::~BaseIterator() {
		ptr = nullptr;
	}
}

#endif //LR_2_BASEITERATOR_IMPL_H
