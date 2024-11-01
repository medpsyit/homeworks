#include "../include/lib.h"

namespace greet_lib
{
	std::string Greeter::greet(const std::string& name)
	{
		return "Здравствуйте, " + name + "!";
	}
}