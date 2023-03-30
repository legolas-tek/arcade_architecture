/*
** EPITECH PROJECT, 2023
** Error.hpp
** File description:
** Error
*/

#ifndef ERROR_HPP
    #define ERROR_HPP

    #include <exception>
    #include <iostream>

class Error {
    public:
        class NoSymbolError : public std::exception {
            public:
                std::string message;
                NoSymbolError(const std::string &symbol)
                    :message("Non existant symbol '" + symbol + "'") {}
                const char *what() const noexcept override
                {
                    return message.c_str();
                }
        };
        class OpenLibraryError : public std::exception {
            public:
                std::string message;
                OpenLibraryError(const std::string &lib)
                    :message("Lib '" + lib + "' doesn't exist !") {}
                const char *what() const noexcept override
                {
                    return message.c_str();
                }
        };
        class TooManyArgumentsError : public std::exception {
            public:
                std::string message;
                TooManyArgumentsError(const int number)
                    :message("Too many arguments (" + std::to_string(number) + ")") {}
                const char *what() const noexcept override
                {
                    return message.c_str();
                }
        };
        class NotEnoughArgumentsError : public std::exception {
            public:
                std::string message;
                NotEnoughArgumentsError()
                    :message("Not enough arguments") {}
                const char *what() const noexcept override
                {
                    return message.c_str();
                }
        };
        class InitSDLError : public std::exception {
            public:
                std::string message;
                InitSDLError(const std::string &error)
                    :message(error) {}
                const char *what() const noexcept override
                {
                    return message.c_str();
                }
        };
        class BadConfigFileError : public std::exception {
            public:
                std::string message;
                BadConfigFileError(const std::string &error)
                    :message(error) {}
                const char *what() const noexcept override
                {
                    return message.c_str();
                }
        };
    protected:
    private:
};

#endif
