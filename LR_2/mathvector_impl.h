//
// Created by Dmitriy Lugovoy on 2019-04-14.
//

#ifndef LR_2_MATHVECTOR_IMPL_H
#define LR_2_MATHVECTOR_IMPL_H

#include "mathvector.h"

namespace MathVectorSpace
{
	template <typename T>
	MathVector<T>::MathVector(): BaseVector()
	{
		data = nullptr;
	}

	template <typename T>
	MathVector<T>::MathVector(size_t init_length, T* ar): BaseVector(init_length)
	{
		try
		{
            data = std::shared_ptr<T>(new T[length], std::default_delete());
            if (ar) memcpy(data.get(), ar, length * sizeof(T));
		}
        catch (std::bad_alloc)
		{
			throw MemoryError("consturctor(length, array)");
		}
	}

	template <typename T>
	MathVector<T>::MathVector(size_t init_length, T value): BaseVector(init_length)
	{
		try
		{
            data = std::shared_ptr<T>(new T[length]);
			for (size_t i = 0; i < length; i++)
                data.get()[i] = value;
		}
        catch (std::bad_alloc)
		{
			throw MemoryError("constructor(length, value)");
		}
	}

	template <typename T>
	MathVector<T>::MathVector(const MathVector<T>& other): BaseVector(other.length)
	{
		try
		{
            data = std::shared_ptr<T>(new T[length]);
            memcpy(data.get(), other.data.get(), length * sizeof(T));
		}
        catch (std::bad_alloc)
		{
			throw MemoryError("constructor(vector)");
		}
	}

	template <typename T>
	MathVector<T>::MathVector(MathVector<T>&& other) noexcept: BaseVector(other.length)
	{
		data = other.data;
		other.length = 0;
        other.data.reset();
	}

	template <typename T>
	MathVector<T>::MathVector(std::initializer_list<T> list): BaseVector(list.size())
	{
		try
		{
            data = std::shared_ptr<T>(new T[length]);
			size_t i = 0;
			for (const auto &el: list)
			{
                data.get()[i] = el;
				i++;
			}
		}
        catch (std::bad_alloc)
		{
			throw MemoryError("constructor(initializer_list)");
		}
	}

	template <typename T>
	MathVector<T> &MathVector<T>::operator = (const MathVector<T>& other)
	{
		if (this == &other) return *this;
		try
		{
			if (other.length != length)
			{
                data.reset();
				length = other.length;
                data = std::shared_ptr<T>(new T[length]);
			}
			memcpy(data, other.data, length * sizeof(T));
		}
        catch(std::bad_alloc)
		{
			throw MemoryError("operator '='");
		}
		return *this;
	}

	template <typename T>
	MathVector<T> &MathVector<T>::operator = (MathVector<T>&& other) noexcept
	{
		if (this == &other) return *this;
		length = other.length;
		data = other.data;
		other.length = 0;
		other.data = nullptr;
		return *this;
	}

	template <typename T>
	MathVector<T> &MathVector<T>::operator = (std::initializer_list<T> list)
	{
		try
		{
			if (length != list.size())
			{
                data.reset();
				length = list.size();
                data = std::shared_ptr<T>(new T[length]);
			}
			for (size_t i = 0; i < length; i++)
                this[i] = list[i];
		}
        catch (std::bad_alloc)
		{
			throw MemoryError("operator '='");
		}
		return *this;
	}

	template <typename T>
	MathVector<T>::~MathVector()
	{
        data.reset();
		length = 0;
	}

	template <typename T>
	T &MathVector<T>::at(size_t index)
	{
		if (index < length)
		{
            return data.get()[index];
		}
		else
		{
			throw OutOfRangeError("at function");
		}
	}

	template <typename T>
	const T &MathVector<T>::at(const size_t &index) const
	{
		if (index < length)
		{
            return data.get()[index];
		}
		else
		{
			throw OutOfRangeError("const at function");
		}
	}

	template <typename T>
	T &MathVector<T>::operator [] (size_t index)
	{
		if (index < length)
		{
            return data.get()[index];
		}
		else
		{
			throw OutOfRangeError("operator '[]'");
		}
	}

	template <typename T>
	const T &MathVector<T>::operator [] (const size_t &index) const
	{
		if (index < length)
		{
            return data.get()[index];
		}
		else
		{
			throw OutOfRangeError("const operator '[]");
		}
	}


	template <typename T>
	void MathVector<T>::clear()
	{
        data.reset();
		length = 0;
	}

	template <typename T>
	MathVector<T> MathVector<T>::operator + (const MathVector<T>& other) const
	{
		if (other.length != length) throw InvalidSizeError("opertator '+'");
		MathVector result(*this);
		for (size_t i = 0; i < length; i++)
			result[i] += other[i];
		return result;
	}

	template <typename T>
	MathVector<T> MathVector<T>::operator - (const MathVector<T>& other) const
	{
		if (other.length != length) throw InvalidSizeError("operator '-'");
		MathVector result(*this);
		for (size_t i = 0; i < length; i++)
			result[i] -= other[i];
		return result;
	}

	template <typename T>
	MathVector<T>& MathVector<T>::operator += (const MathVector& other)
	{
		if (other.length != length) throw InvalidSizeError("operator '+='");
		for (size_t i = 0; i < length; i++)
            this[i] += other[i];
		return *this;
	}

	template <typename T>
	MathVector<T>& MathVector<T>::operator -= (const MathVector& other)
	{
		if (other.length != length) throw InvalidSizeError("operator '-='");
		for (size_t i = 0; i < length; i++)
            this[i] += other[i];
		return *this;
	}

	template <typename T>
	T MathVector<T>::scalar_mult(const MathVector<T>& other) const
	{
		T result = 0;
		if (length != other.length)
		{
			throw InvalidSizeError("scalar_mult function");
		}
		else
		{
			for (size_t i = 0; i < length; i++)
                result += this[i] * other[i];
		}
		return result;
	}

	template <typename T>
	T MathVector<T>::operator * (const MathVector<T>& other) const
	{
		T result = 0;
		if (length != other.length)
		{
			throw InvalidSizeError("operator '*'");
		}
		else
		{
			for (size_t i = 0; i < length; i++)
                result += this[i] * other[i];
		}
		return result;
	}

	template <typename T>
	MathVector<T> MathVector<T>::vector_mult(const MathVector<T>& other) const
	{
		if (length != other.length || length != 3) throw InvalidSizeError("vector_mult function");

		MathVector result(*this);
        result[0] = this[1] * other[2] - this[2] * other[1];
        result[1] = this[2] * other[0] - this[0] * other[2];
        result[2] = this[0] * other[1] - this[1] * other[0];

		return result;
	}

	template <typename T>
	MathVector<T> MathVector<T>::operator ^ (const MathVector<T>& other) const
	{
		if (length != other.length || length != 3) throw InvalidSizeError("operator '^'");

		MathVector result(*this);
        result[0] = this[1] * other[2] - this[2] * other[1];
        result[1] = this[2] * other[0] - this[0] * other[2];
        result[2] = this[0] * other[1] - this[1] * other[0];

		return result;
	}

	template <typename T>
	MathVector<T> MathVector<T>::operator * (const T& value) const
	{
		MathVector result(*this);
		for (size_t i = 0; i < length; i++)
			result[i] *= value;
		return result;
	}

	template <typename T>
	MathVector<T> MathVector<T>::operator / (const T& value) const
	{
		MathVector result(*this);
		for (size_t i = 0; i < length; i++)
			result[i] /= value;
		return result;
	}

	template <typename T>
	MathVector<T> &MathVector<T>::operator *= (const T& value)
	{
		for (size_t i = 0; i < length; i++)
		    data.get()[i] *= value;
		return *this;
	}

	template <typename T>
	MathVector<T> &MathVector<T>::operator /= (const T& value)
	{
		for (size_t i = 0; i < length; i++)
            data.get()[i] /= value;
		return *this;
	}

	template <typename T>
	bool MathVector<T>::is_ort(const MathVector<T>& other) const
	{
		return (*this) * other == 0;
	}

	template <typename T>
	bool MathVector<T>::is_col(const MathVector<T>& other) const
	{
		MathVector result = (*this) ^ other;
		bool answer = true;
		for (size_t i = 0; i < length && answer; i++)
		{
			if (result[i] != 0)
				answer = false;
		}
		return answer;
	}

	template <typename T_compare>
	bool operator == (const MathVector<T_compare>& first, const MathVector<T_compare>& second)
	{
		bool result = first.length == second.length;
		if (result)
		{
			for (size_t i = 0; i < first.length && result; ++i)
			{

				if (first[i] != second[i])
				{
					result = false;
				}
			}
		}
		return result;
	}

	template <typename T_compare>
	bool operator != (const MathVector<T_compare>& first, const MathVector<T_compare>& second)
	{
		bool result = first.length != second.length;
		if (!result)
		{
			for (size_t i = 0; i < first.length && !result; ++i)
			{

				if (first[i] != second[i])
				{
					result = true;
				}
			}
		}
		return result;
	}

	template <typename T_out>
	std::ostream& operator << (std::ostream& stream, const MathVector<T_out>& vector)
	{
		stream << "[ ";
		for (size_t i = 0; i < vector.length; i++)
		{
			if (i == vector.length - 1)
			{
				stream << vector[i] << " ";
			}
			else
			{
				stream << vector[i] << ", ";
			}
		}
		stream <<  "]\n" << std::endl;
		return stream;
	}

	template <typename T>
	size_t MathVector<T>::size() const { return length; }

	template <typename T>
	bool MathVector<T>::empty() const { return length == 0; }

	template <typename T>
	double MathVector<T>::module() const
	{
		double res = 0;
		for (const T &el: *this)
		{
			res += el * el;
		}
		return sqrt(res);
	}

	template <typename T>
	void MathVector<T>::normalise()
	{
		double mod = module();
		for (T &el: *this)
		{
			el /= mod;
		}
	}

	template <typename T>
	void MathVector<T>::reverse()
	{
		for (T &el: *this)
		{
			el = -el;
		}
	}

	template <typename T>
	MathVector<T> MathVector<T>::operator - () const
	{
		MathVector<T> result(*this);
		for (T &el: result.data)
		{
			el = -el;
		}
		return result;
	}

	template<typename T>
	VectorIterator<T> MathVector<T>::begin()
	{
        VectorIterator<T> start(data);
		return start;
	}

	template<typename T>
	VectorIterator<T> MathVector<T>::end()
	{
        VectorIterator<T> end(std::shared_ptr<T>(data.get() + this->length));
		return end;
	}

	template<typename T>
	ConstVectorIterator<T> MathVector<T>::begin() const
	{
        ConstVectorIterator<T> start(data);
		return start;
	}

	template<typename T>
	ConstVectorIterator<T> MathVector<T>::end() const
	{
        ConstVectorIterator<T> end(std::shared_ptr<T>(data.get() + this->length));
		return end;
	}
}

#endif //LR_2_MATHVECTOR_IMPL_H
