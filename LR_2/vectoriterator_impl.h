//
// Created by Dmitriy Lugovoy on 2019-04-19.
//

#ifndef LR_2_VECTORITERATOR_IMPL_H
#define LR_2_VECTORITERATOR_IMPL_H

#include "vectoriterator.h"

namespace MathVectorSpace
{
	template<typename T>
	VectorIterator<T>::VectorIterator(const VectorIterator<T> &iterator): BaseIterator<T>(iterator) {}

	template<typename T>
	VectorIterator<T>::VectorIterator(std::shared_ptr<T> p): BaseIterator<T>(p) {}

	template<typename T>
	T &VectorIterator<T>::operator * ()
	{
	    std::shared_ptr<T> tmp_ptr = this->ptr.lock();
	    T *tmp_pointer = tmp_ptr.get();
		return *tmp_pointer;
	}

	template<typename T>
	const T &VectorIterator<T>::operator * () const
	{
        std::shared_ptr<T> tmp_ptr = this->ptr.lock();
        T *tmp_pointer = tmp_ptr.get();
        return *tmp_pointer;
	}

	template<typename T>
	T *VectorIterator<T>::operator -> ()
	{
        std::shared_ptr<T> tmp_ptr = this->ptr.lock();
        T *tmp_pointer = tmp_ptr.get();
        return tmp_pointer;
	}

	template<typename T>
	const T *VectorIterator<T>::operator -> () const
	{
        std::shared_ptr<T> tmp_ptr = this->ptr.lock();
        T *tmp_pointer = tmp_ptr.get();
        return tmp_pointer;
	}
}

#endif //LR_2_VECTORITERATOR_IMPL_H
