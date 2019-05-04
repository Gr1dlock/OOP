//
// Created by Dmitriy Lugovoy on 2019-04-18.
//

#ifndef LR_2_BASEITERATOR_H
#define LR_2_BASEITERATOR_H

#include "mathvectorspace.h"

namespace MathVectorSpace
{
    template <typename T>
    class BaseIterator
    {
    public:

        BaseIterator(const BaseIterator<T>& iterator);

        BaseIterator<T> &operator = (const BaseIterator<T> &iterator);

        BaseIterator<T> &operator ++ ();
        BaseIterator<T> &operator -- ();

        const BaseIterator<T> operator ++ (int);
        const BaseIterator<T> operator -- (int);

        bool operator ==(const BaseIterator<T> &iterator);
        bool operator !=(const BaseIterator<T> &iterator);

        operator bool() const;

        virtual ~BaseIterator();

    protected:
        std::weak_ptr<T> ptr;
        size_t count;
        int index;
        explicit BaseIterator(std::shared_ptr<T> p);
    };

}


#endif //LR_2_BASEITERATOR_H
