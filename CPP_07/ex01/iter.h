#ifndef CPP_ITER_H
#define CPP_ITER_H

template<typename T>
void iter(T *arr, int len, void (*func)(const T &))
{
	for (int i = 0; i < len; i++)
		func(arr[i]);
}

#endif //CPP_ITER_H
