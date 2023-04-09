/*
** EPITECH PROJECT, 2023
** Error.cpp
** File description:
** Error
*/

#include "Error.hpp"

Error::InitSDLError::InitSDLError(const std::string &error): message(error) {}

Error::InitSDLError::~InitSDLError() {}

char const *Error::InitSDLError::what() const noexcept
{
    return message.c_str();
}

Error::NoSymbolError::NoSymbolError(const std::string &symbol): message("Non existant symbol '" + symbol + "'") {}

Error::NoSymbolError::~NoSymbolError() {}

char const *Error::NoSymbolError::what() const noexcept
{
    return message.c_str();
}

Error::OpenLibraryError::OpenLibraryError(const std::string &lib): message("Lib '" + lib + "' doesn't exist !") {}

Error::OpenLibraryError::~OpenLibraryError() {}

char const *Error::OpenLibraryError::what() const noexcept
{
    return message.c_str();
}

Error::TooManyArgumentsError::TooManyArgumentsError(const int number): message("Too many arguments (" + std::to_string(number) + ")") {}

Error::TooManyArgumentsError::~TooManyArgumentsError() {}

char const *Error::TooManyArgumentsError::what() const noexcept
{
    return message.c_str();
}

Error::NotEnoughArgumentsError::NotEnoughArgumentsError(): message("Not enough arguments") {}

Error::NotEnoughArgumentsError::~NotEnoughArgumentsError() {}

char const *Error::NotEnoughArgumentsError::what() const noexcept
{
    return message.c_str();
}

Error::BadConfigFileError::BadConfigFileError(const std::string &error): message(error) {}

Error::BadConfigFileError::~BadConfigFileError() {}

char const *Error::BadConfigFileError::what() const noexcept
{
    return message.c_str();
}
