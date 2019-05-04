//
// Created by Dmitriy Lugovoy on 2019-04-14.
//

#ifndef LR_2_MATHVECTOR_H
#define LR_2_MATHVECTOR_H

#include <memory>
#include "basevector_impl.h"
#include "exceptions.h"
#include "vectoriterator_impl.h"
#include "constvectoriterator_impl.h"

namespace MathVectorSpace
{
	template<typename T>
	class MathVector : public BaseVector
	{
	public:
		MathVector();
		explicit MathVector(size_t init_length, T* ar = nullptr);
		explicit MathVector(size_t init_length, T value);
		MathVector(const MathVector<T> &other);
		MathVector(MathVector<T> &&other) noexcept;
		MathVector(std::initializer_list <T> list);

		~MathVector() override;

		MathVector<T> &operator = (const MathVector<T> &other);
		MathVector<T> &operator = (MathVector<T> &&other) noexcept;
		MathVector<T> &operator = (std::initializer_list <T> list);

		T &at(size_t index);
		const T &at(const size_t &index) const;

		T &operator [] (size_t index);
		const T &operator [] (const size_t &index) const;

		void clear();

		bool is_ort(const MathVector<T> &other) const;
		bool is_col(const MathVector<T> &other) const;

		double module() const;

		void normalise();

		void reverse();
		MathVector<T> operator - () const;

		MathVector<T> vector_mult(const MathVector<T> &other)const;
		MathVector<T> operator ^ (const MathVector<T>& other) const;

		T scalar_mult(const MathVector<T> &V) const;
		T operator * (const MathVector<T>& other) const;

		MathVector<T> operator + (const MathVector<T> &other) const;
		MathVector<T> &operator += (const MathVector<T> &other);

		MathVector<T> operator - (const MathVector<T> &other) const;
		MathVector<T> &operator -= (const MathVector<T> &other);

		MathVector<T> operator * (const T &value) const;
		MathVector<T> &operator *= (const T &value);

		MathVector<T> operator / (const T &value) const;
		MathVector<T> &operator /= (const T &value);

		template<typename T_compare>
		friend bool operator == (const MathVector<T_compare> &first, const MathVector<T_compare> &second);
		template <class T_compare>
		friend bool operator != (const MathVector<T_compare> &first, const MathVector<T_compare> &second);

		template<typename T_out>
		friend std::ostream &operator << (std::ostream &stream, const MathVector<T_out> &vector);

		size_t size() const override;

		bool empty() const override;

		VectorIterator<T> begin();
		VectorIterator<T> end();

		ConstVectorIterator<T> begin() const;
		ConstVectorIterator<T> end() const;

	private:
        std::shared_ptr<T> data;
	};
}


#endif //LR_2_MATHVECTOR_H
