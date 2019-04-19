//
// Created by Dmitriy Lugovoy on 2019-04-14.
//

#ifndef LR_2_BASEVECTOR_IMPL_H
#define LR_2_BASEVECTOR_IMPL_H

#include "basevector.h"

namespace MathVectorSpace
{

		BaseVector::BaseVector() : length(0) {}


		BaseVector::BaseVector(size_t init_length) : length(init_length) {}


		BaseVector::~BaseVector() { length = 0; }
    
        

}

#endif // LR_2_BASEVECTOR_IMPL_H
