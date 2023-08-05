#ifndef __INSUFFICIENT_FUNDS_EXCEPTION_H_
#define __INSUFFICIENT_FUNDS_EXCEPTION_H_

#include <iostream>

class InsufficientFundsException:public std::exception
{
public:
    InsufficientFundsException() noexcept = default;
    ~InsufficientFundsException() = default;

    virtual const char* what() const noexcept { return "Insufficient Funds Exception"; }
};

#endif // __INSUFFICIENT_FUNDS_EXCEPTION_H_
