/*
** EPITECH PROJECT, 2023
** nanotekspice [SSH: 192.168.161.128]
** File description:
** Error
*/

#ifndef ERROR_HPP_
#define ERROR_HPP_

#include <exception>
#include <string>

namespace arcd {
    class Error: public std::exception {
        public:
            Error(const char *msg) : _err_msg(msg) {};
            ~Error() = default;

            void setErrMsg(const char *msg) { _err_msg = msg; };

            const char* what() const noexcept override { return _err_msg.c_str(); };

        protected:
        private:
            std::string _err_msg;
    };
}


#endif /* !ERROR_HPP_ */
