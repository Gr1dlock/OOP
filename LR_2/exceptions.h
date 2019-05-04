//
// Created by Dmitriy Lugovoy on 2019-04-15.
//

#ifndef LR_2_EXCEPTIONS_H
#define LR_2_EXCEPTIONS_H

#include <exception>
#include <string>
#include <ctime>

class BaseException : public std::exception
{
public:

	explicit BaseException(const std::string &plc = "")
	{
		place = plc;
		time = get_time();
	}

    virtual const char *what() const noexcept override { return get_message(); }

protected:
	std::string place;
	std::string time;

	std::string get_time() const
	{
        std::time_t now = std::time(nullptr);
        std::string string_time = asctime(std::localtime(&now));
        string_time.pop_back();
        return string_time;
	}

	virtual const char * get_message() const = 0;

};

class MemoryError : public BaseException
{
public:
    explicit MemoryError(const std::string &plc = "") : BaseException(plc) {}
	const char * get_message() const override
	{
        std::string msg = time + " Memory allocation error occurred";
		if (!place.empty()) msg += " in " + place;
        msg += "\n";
		return msg.c_str();
	}
};

class OutOfRangeError : public BaseException
{
public:
	explicit OutOfRangeError(const std::string &plc = "") : BaseException(plc) {};
	const char * get_message() const override
	{
        std::string msg = time + " Index is out of range";
		if (!place.empty()) msg += " in " + place;
        msg += "\n";
        return msg.c_str();
	}
};

class InvalidSizeError : public BaseException
{
public:
	explicit InvalidSizeError(const std::string &plc = "") : BaseException(plc) {};
	const char * get_message() const override
	{
        std::string msg = time + " Size of the vector is not valid";
		if (!place.empty()) msg += " in " + place;
        msg += "\n";
        return msg.c_str();
	}
};

#endif //LR_2_EXCEPTIONS_H
