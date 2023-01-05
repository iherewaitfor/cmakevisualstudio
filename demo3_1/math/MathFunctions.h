#ifndef POWER_H
#define POWER_H

#ifdef MATHFUNCIONS
	#define MY_LIB_API __declspec(dllexport)
#else
	#define MY_LIB_API __declspec(dllimport)
#endif
MY_LIB_API double  power(double base, int exponent);

#endif