#pragma once
#include "pch.h"

#ifdef  MATHOPERATIONSLIB_EXPORTS
#define MATHOPERATIONS_API __declspec(dllexport)
#else
#define MATHOPERATIONS_API __declspec(dllimport)
#endif //  MATHOPERATIONSLIB_EXPORT

extern "C" MATHOPERATIONS_API int Sum(int A, int B);

extern "C" MATHOPERATIONS_API int Subtraction(int A, int B);

extern "C" MATHOPERATIONS_API int Multiply(int A, int B);

extern "C" MATHOPERATIONS_API int Divide(int A, int B);

