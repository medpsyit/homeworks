#pragma once

#ifdef LEAVE_EXPORTS
#define LEAVE_API __declspec(dllexport)
#else
#define LEAVE_API __declspec(dllimport)
#endif

#include <string>

namespace leave_lib
{
	class Leaver
	{
	public:
		LEAVE_API std::string leave(const std::string& name);
	};
}
