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
		BaseIterator<T> (iterator) {}

	template<typename T>
	ConstVectorIterator<T>::ConstVectorIterator(std::shared_ptr<T> p) : BaseIterator<T> (p) {}

	template<typename T>
	const T &ConstVectorIterator<T>::operator * () const
	{
        std::shared_ptr<T> tmp_ptr = this->ptr.lock();
        T *tmp_pointer = tmp_ptr.get();
        return *tmp_pointer;
	}

	template<typename T>
	const T *ConstVectorIterator<T>::operator -> () const
	{
        std::shared_ptr<T> tmp_ptr = this->ptr.lock();
        T *tmp_pointer = tmp_ptr.get();
        return tmp_pointer;
	}
}
#endif //LR_2_CONSTVECTORITERATOR_IMPL_H
