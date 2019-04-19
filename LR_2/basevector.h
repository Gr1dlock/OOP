//
// Created by Dmitriy Lugovoy on 2019-04-14.
//

#ifndef LR_2_BASEVECTOR_H
#define LR_2_BASEVECTOR_H

#include "mathvectorspace.h"

namespace MathVectorSpace
{
	class BaseVector {
	public:
		explicit BaseVector();

		explicit BaseVector(size_t init_length);

		virtual ~BaseVector();

		virtual bool empty() const = 0;

		virtual size_t size() const = 0;

	protected:
		size_t length;
	};

}

#include "basevector_impl.h"

#endif //LR_2_BASEVECTOR_H
