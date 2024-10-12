#include "exceptions.h"

const char* Restrictions::what() const { return error_and_cause.c_str(); }