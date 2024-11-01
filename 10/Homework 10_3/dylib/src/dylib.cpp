#include "../include/dylib.h"

namespace leave_lib
{
	std::string Leaver::leave(const std::string& name)
	{
		return "До свидания, " + name + "!";
	}
}