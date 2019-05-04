//
// Created by Dmitriy Lugovoy on 2019-04-18.
//

#ifndef LR_2_BASEITERATOR_IMPL_H
#define LR_2_BASEITERATOR_IMPL_H

#include "baseiterator.h"

namespace MathVectorSpace
{
    template <typename T>
    BaseIterator<T>::BaseIterator(std::shared_ptr<T> p)
    {
        ptr = std::weak_ptr<T>(p);
    }

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
        std::shared_ptr<T> tmp_ptr = ptr.lock();
        T* tmp = tmp_ptr.get();
        ++tmp;
		return *this;
	}

	template<typename T>
	BaseIterator<T> &BaseIterator<T>::operator -- ()
	{
        std::shared_ptr<T> tmp_ptr = ptr.lock();
        T* tmp = tmp_ptr.get();
        --tmp;
		return *this;
	}

	template<typename T>
	const BaseIterator<T> BaseIterator<T>::operator ++ (int)
	{
		BaseIterator tmp(*this);
        std::shared_ptr<T> tmp_ptr = ptr.lock();
        T* tmp_pointer = tmp_ptr.get();
        ++tmp_pointer;
		return tmp;
	}

	template<typename T>
	const BaseIterator<T> BaseIterator<T>::operator -- (int)
	{
		BaseIterator tmp(*this);
        std::shared_ptr<T> tmp_ptr = ptr.lock();
        T* tmp_pointer = tmp_ptr.get();
        --tmp_pointer;
		return tmp;
	}

	template<typename T>
	bool BaseIterator<T>::operator == (const BaseIterator<T> &iterator)
	{
		return (ptr.lock() == iterator.ptr.lock());
	}

	template<typename T>
	bool BaseIterator<T>::operator != (const BaseIterator<T> &iterator)
	{
		return (ptr.lock() != iterator.ptr.lock());
	}

	template<typename T>
	BaseIterator<T>::~BaseIterator() {
		ptr.reset();
	}

}

#endif //LR_2_BASEITERATOR_IMPL_H
