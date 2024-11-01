#pragma once
#include <string>

namespace greet_lib
{
	class Greeter
	{
	public:
		std::string greet(const std::string& name);
	};
}