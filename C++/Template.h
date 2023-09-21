#pragma once

template <typename T>
T Sum(T A, T B);

void Template();

template<typename T>
T Sum(T A, T B)
{
	return T(A + B);
}
