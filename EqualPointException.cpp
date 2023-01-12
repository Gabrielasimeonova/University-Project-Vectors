#include "stdafx.h"
#include "EqualPointException.h"
#include <iostream>
#include <cstring>

EqualPointException::EqualPointException(string const& message) throw()
	: exception(), message(message)
{
}

EqualPointException::~EqualPointException() throw()
{
	message.clear();
}

const char* EqualPointException::what() const throw()
{
	return message.c_str();
}