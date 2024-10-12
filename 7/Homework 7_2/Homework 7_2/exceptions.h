#pragma once
#include <iostream>

class Restrictions : public std::exception
{
public:
    Restrictions(const std::string& error_and_cause) : error_and_cause{ error_and_cause }
    {}
    const char* what() const override;

private:
    std::string error_and_cause;
};
