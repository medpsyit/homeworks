#pragma once

#ifdef FIGURES_EXPORTS
#define FIGURES_API __declspec(dllexport)
#else
#define FIGURES_API __declspec(dllimport)
#endif

#include "figure.h"
#include "triangles.h"
#include "quadrangles.h"

namespace figures_lib
{
	FIGURES_API void print_info(Figure& figure);
}
