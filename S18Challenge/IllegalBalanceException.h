#ifndef __ILLEGAL_BALANCE_EXCEPTION_H_
#define __ILLEGAL_BALANCE_EXCEPTION_H_

#include <iostream>

class IllegalBalanceException:public std::exception
{
public:
    IllegalBalanceException() noexcept = default;
    ~IllegalBalanceException() = default;

    virtual const char* what() const noexcept { return "Illegal Balance Exception"; }
};

#endif // __ILLEGAL_BALANCE_EXCEPTION_H_
