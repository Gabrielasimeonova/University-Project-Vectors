#ifndef _EQUALPOINTEXCEPTION_H
#define _EQUALPOINTEXCEPTION_H

#include <exception>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;
class EqualPointException : public exception
{
public:
	EqualPointException(string const&) throw();
	virtual const char* what() const throw();
	virtual ~EqualPointException() throw();
private:
	string message;
};

#pragma once
#endif
