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

/**
 * @brief Error namespace.
 * 
*/
namespace Error {

    /**
     * @brief Non existant throw error
    */
    class NoSymbolError : public std::exception {
        public:
            NoSymbolError(const std::string &symbol);
            ~NoSymbolError();
            const char *what() const noexcept override;
        private:
            std::string message;
    };

    /**
     * @brief Error on downloading the shared library
    */
    class OpenLibraryError : public std::exception {
        public:
            OpenLibraryError(const std::string &lib);
            ~OpenLibraryError();
            const char *what() const noexcept override;
        private:
            std::string message;
    };

    /**
     * @brief Error on number given arguments
    */
    class TooManyArgumentsError : public std::exception {
        public:
            TooManyArgumentsError(const int number);
            ~TooManyArgumentsError();
            const char *what() const noexcept override;
        private:
            std::string message;
    };

    class NotEnoughArgumentsError : public std::exception {
        public:
            NotEnoughArgumentsError();
            ~NotEnoughArgumentsError();
            const char *what() const noexcept override;
        private:
            std::string message;
    };

    /**
     * @brief Error on SDL init
    */
    class InitSDLError : public std::exception {
        public:
            InitSDLError(const std::string &error);
            ~InitSDLError();
            char const *what() const noexcept override;
        private:
            std::string message;
    };

    /**
     * @brief
     * Error on config file to load library
    */
    class BadConfigFileError : public std::exception {
        public:
            BadConfigFileError(const std::string &error);
            ~BadConfigFileError();
            char const *what() const noexcept override;
        private:
            std::string message;
    };
};

#endif
