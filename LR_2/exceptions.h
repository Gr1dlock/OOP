//
// Created by Dmitriy Lugovoy on 2019-04-15.
//

#ifndef LR_2_EXCEPTIONS_H
#define LR_2_EXCEPTIONS_H

#include <exception>

class BaseException : public std::exception
{
public:

	explicit BaseException(const std::string &plc = "")
	{
		place = plc;
		time = get_time();
	}

	const char *what() const noexcept override { return get_message(); }

protected:
	std::string place;
	std::string time;

	std::string get_time() const
	{
		time_t now = std::time(nullptr);
		return asctime(std::localtime(&now));
	}

	virtual const char * get_message() const = 0;

};

class MemoryError : public BaseException
{
public:
	explicit MemoryError(const std::string &plc = "") : BaseException(plc) {};
	const char * get_message() const override
	{
		std::string msg = "Memory allocation error occurred";
		if (!place.empty()) msg += " in " + place;
		msg += " at " + time;
		return msg.c_str();
	}
};

class OutOfRangeError : public BaseException
{
public:
	explicit OutOfRangeError(const std::string &plc = "") : BaseException(plc) {};
	const char * get_message() const override
	{
		std::string msg = "Index is out of range";
		if (!place.empty()) msg += " in " + place;
		msg += " at " + time;
		return msg.c_str();
	}
};

class InvalidSizeError : public BaseException
{
public:
	explicit InvalidSizeError(const std::string &plc = "") : BaseException(plc) {};
	const char * get_message() const override
	{
		std::string msg = "Size of the vector is not valid";
		if (!place.empty()) msg += " in " + place;
		msg += " at " + time;
		return msg.c_str();
	}
};

#endif //LR_2_EXCEPTIONS_H
