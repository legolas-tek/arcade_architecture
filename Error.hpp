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

namespace arcade {
    class Error: public std::exception {
        public:
            Error(const char *message, const char *component = "Arcade") : _err_msg(message), _component(component) {}
            ~Error() override = default;

            const char *what() const noexcept override {
                return _err_msg.c_str();
            }

            const char *getComponent() const noexcept {
                return _component.c_str();
            }

        protected:
        private:
            std::string _err_msg;
            std::string _component;
    };
}


#endif /* !ERROR_HPP_ */
